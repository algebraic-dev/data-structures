// Felipe G. - 2021

#include "malloc.h"
#include <stdio.h>
#include <stdbool.h>

// Binary search trees são boas para guardar pares
// chave-valor e todas operações, em tempo médio
// são O(log(n))

typedef struct node {
    struct node* left;
    struct node* right;
    int hash;
    char* value;
} Node;

// Inicializa a HashTable
Node* init(char* key, char* value);

// Insere um novo valor na arvore binária 
void insert(Node* bt, char* key, char* value);

// Remove a key  de dentro da arvore
bool del(Node* bt, char* key);

// Pega o valor de dentro da arvore
char* get(Node* bt, char* key);