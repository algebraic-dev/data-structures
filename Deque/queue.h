// Felipe G. - 2021

// Inclui a estrutura Node que serve tanto para Stacks e 
// Queues.

#include "malloc.h"
#include <stdio.h>

// Declaração do tipo Node que é uma "célula"
// de uma lista encadeada comum que contém o valor
// que nesse exemplo pertence ao tipo Inteiro e uma
// referencia ao proximo nó da lista,
// uma referencia ao nó anterior
// e o tamanho .
typedef struct node {
    int value;  
    struct node* next; 
    struct node* prev;
    int size; 
} Node;

// Uma Queue é uma estrutura de dado do tipo FIFO ( First in 
// First out) e isso faz com que seja O(1) a entrada e retirada de
// elementos da queue.

// Cria uma queue com um elemento e apontando pra NULL
Node* init(int value);

// Coloca um elemento no topo da queue
void push(Node* list, int value);

// Remove alguma coisa do topo da queue
Node* pop(Node* list);

// retorna o topo da queue
int top(Node* list);

// imprime a queue para a tela.
void print(Node* list);