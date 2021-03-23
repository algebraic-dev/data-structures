#include "searchtree.h"

// Usa o algirtmo DJB2 para hashing da chave
int hashCode(char* key, int size) {
  unsigned long hash = 5381;
  int c;
  while (c = *key++)
    hash = ((hash << 5) + hash) + c;
  return hash % size; 
}

Node* init(char* key, char* value) {
    int hash = hashCode(key, 10000000);
    Node* node = malloc(sizeof(Node));
    node->left = NULL;
    node->right = NULL;
    node->hash = hash;
    node->value = value;
    return node;
}

void insert_hash(Node* bt, Node* node){
    if(node->hash > bt->hash){
        if(bt->right == NULL){
            bt->right = node;
        }else{
            insert_hash(bt->right, node);
        }
    }else if(node->hash < bt->hash){
        if(bt->left == NULL){
            bt->left = node;
        } else {
            insert_hash(bt->left, node);
        }
    } else {
        bt->value = node->value;
    }
}

void insert(Node* bt, char* key, char* value) {
    Node* node = init(key, value);
    insert_hash(bt, node);
}

bool del(Node* bt, char* key) {
    int hash = hashCode(key, 10000000);
    if(hash > bt->hash){
        if(bt->right != NULL){
            if(del(bt->right, key)){
                free(bt->right);
                bt->right = NULL;
            };
        }
    } else if(hash < bt->hash){
        if(bt->left != NULL){
            if(del(bt->left, key)){
                free(bt->left);
                bt->left = NULL;
            };
        }
    } else {
        return true;
    }
    return false;

}

Node* get_node(Node* bt, int hash){
    if(hash > bt->hash){
        if(bt->right != NULL){
            return get_node(bt->right, hash);
        }
    } else if(hash < bt->hash){
        if(bt->left != NULL){
            return get_node(bt->left, hash);
        }
    } else {
        return bt;
    }
    return NULL;
}

char* get(Node* bt, char* key) {
    int hash = hashCode(key, 10000000);
    Node* res = get_node(bt, hash);
    if(res != NULL){
        return res->value;
    }
}