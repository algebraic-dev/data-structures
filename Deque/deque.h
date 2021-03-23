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
Node* init(int value);

// Coloca um elemento no topo da deque
void push(Node* list, int value);

// Remove alguma coisa do fim da deque
void pop(Node* list);

// Remove alguma coisa do topo da deque
Node* shift(Node* list);

// Adiciona algo no inicio da deque
Node* unshift(Node* list, int value);

// retorna o topo da deque
int top(Node* list);

// imprime a deque para a tela.
void print(Node* list);