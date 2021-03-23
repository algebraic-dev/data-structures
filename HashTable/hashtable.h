// Felipe G. - 2021

#include "malloc.h"
#include <stdio.h>

// Um hashtable junta o melhor dos Arrays e listas encadeadas
// dentro de uma estrutura de dados que a chave é um dado composto (nesse caso)

// Lista encadeada para colocar dentro do hashtable
typedef struct node {
  char* key;
  char* value;
  struct node* next;
} Node;


typedef struct hashtable {
  int size;
  Node** nodes;  
} HashTable;


HashTable* init(int size);

// Faz o hashing da chave e retorna um numero
int hashCode(char* key, int size);

// Insere um par chave-valor na hashtable
void insert(HashTable* hs, char* key, char* value);

// pega o valor de dentro da hashtable
char* get(HashTable* hs, char* key);
