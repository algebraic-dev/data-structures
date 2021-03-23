#include "queue.h"

Node* init(int value) {
  Node* node = malloc(sizeof(Node));
  node->next = node;
  node->prev = node;
  node->value = value;    
  node->size = 1;
  return node;
}

void push(Node* list, int value) {
  Node* node = malloc(sizeof(Node));
  node->prev = list->prev;
  node->next = list;
  node->value = value;
  list->prev->next = node;
  list->prev = node;
  list->size += 1;
}

Node* pop(Node* list) {
  Node* next = list->next;
  next->prev = list->prev;
  next->size = list->size-1;
  free(list);
  return next;
}

int top(Node* list) {
  return list->value;
}

void print(Node* list) {
  printf("[");
  Node* actual = list;
  for(int i = 0; i < list->size; i++){  
    printf("%d",actual->value);
    actual = actual->next;
    if(list->size != i+1){
        printf(", ");
    }
  }
  printf("]\n\r");
}
