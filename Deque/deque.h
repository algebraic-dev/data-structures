// Felipe G. - 2021

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

// Uma Deque é uma estrutura de dados que voce pode 
// Inserir e deletar do fim ou do inicio.

// Cria uma deque com um elemento e apontando pra NULL
Node* deque_init(int n);

// Coloca um elemento no topo da deque
void deque_push(Node* list, int value);

// Remove alguma coisa do fim da deque
int deque_pop(Node* list);

// Remove alguma coisa do topo da deque
Node* deque_shift(Node* list);

// Adiciona algo no inicio da deque
Node* deque_unshift(Node* list, int value);

// retorna o topo da deque
int deque_top(Node* list);

// imprime a deque para a tela.
void deque_print(Node* list);