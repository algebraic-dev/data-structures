#include "hashtable.h"
#include "string.h"

HashTable* init(int size) {
  HashTable* hs = malloc(sizeof(HashTable));
  hs->nodes = calloc(size, sizeof(Node*));
  hs->size  = size;
}

// Usa o algirtmo DJB2 para hashing da chave
int hashCode(char* key, int size) {
  unsigned long hash = 5381;
  int c;
  while (c = *key++)
    hash = ((hash << 5) + hash) + c;
  return hash % size; 
}

// Insere um par chave-valor na hashtable
void insert(HashTable* hs, char* key, char* value) {
  int hash = hashCode(key, hs->size);
  Node* last = hs->nodes[hash];
  if(last == NULL){
    hs->nodes[hash] = malloc(sizeof(Node));
    hs->nodes[hash]->key = key;
    hs->nodes[hash]->value = value;
    hs->nodes[hash]->next = NULL;
  }else{
    while(last->next != NULL){
      last = last->next;
    }
    last->next = malloc(sizeof(Node));
    last->next->key = key;
    last->next->value = value;
  }
}

// pega o valor de dentro da hashtable
char* get(HashTable* hs, char* key) {
  int hash = hashCode(key, hs->size);
  Node* last = hs->nodes[hash];
  while(last != NULL){
      if(strcmp(last->key, key) == 0){
          return last->value;
      } else{
          last = last->next;
      }
  }
  return "NO VALUE!!";
}