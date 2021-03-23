#include "stack.h"

// Stack implementada como lista encadeada.

Node* init(int value) {
  Node* node = malloc(sizeof(node));
  node->next = NULL;
  node->value = value;    
  return node;
}

Node* push(Node* list, int value) {
  Node* node = malloc(sizeof(node));
  node->next = list;
  node->value = value;    
  return node;
}

Node* pop(Node* list) {
  Node* next = list->next;
  free(list);
  return next;
}

int top(Node* list) {
  return list->value;
}

// Uso de recursividade para evitar contador.
void print_item(Node* list){
  printf("%d",list->value);
  if(list->next != NULL){
    printf(", ");
    print_item(list->next);
  }
}

void print(Node* list) {
  printf("[");
  print_item(list);
  printf("]\n\r");
}
