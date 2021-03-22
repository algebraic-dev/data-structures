// Felipe G. - 2021

#include "malloc.h"
#include <stdio.h>

// Declaração do tipo Node que é uma "célula"
// de uma lista encadeada comum que contém o valor
// que nesse exemplo pertence ao tipo Inteiro e uma
// referencia ao proximo nó da lista,
typedef struct node {
    int value;  
    struct node* next; 
} Node;

// Uma stack é uma estrutura de dado do tipo LIFO ( Last in 
// First out) e isso faz com que seja O(1) a entrada e retirada de
// elementos da lista além de ser incrivelmente util para algoritmos lock-free 
// Pode ser usada para inverter a ordem dos elementos.

// Cria uma lista com um elemento e apontando pra NULL
Node* init(int value);

// Coloca um elemento no topo da lista
Node* push(Node* list, int value);

// Remove alguma coisa do topo da lista
Node* pop(Node* list);

// retorna o topo da lista
int top(Node* list);

// imprime a lista para a tela.
void print(Node* list);