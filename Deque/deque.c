#include "deque.h"

Node* deque_init(int n) {
  Node* node = malloc(sizeof(Node));
  node->next = node;
  node->prev = node;
  node->value = n;    
  node->size = 0;
  return node;
}

void deque_push(Node* list, int value) {
  Node* node = malloc(sizeof(Node));
  
  node->next = list;
  node->prev = list->prev;
  node->value = value;
  
  list->prev->next = node;
  list->prev = node;
  list->size += 1;
}

int deque_pop(Node* list) {
  if(list->size == 0){
    return 0;
  } else {
    int value = list->prev->value;
    Node* last = list->prev->prev;
    free(list->prev);
    list->prev = last;
    list->size -= 1;
    return value;
  }
}

Node* deque_shift(Node* list) {
  Node* next = list->next;
  next->prev = list->prev;
  list->prev->next = next;
  free(list);
  
  return next;
}

Node* deque_unshift(Node* list, int value) {
  Node* node = malloc(sizeof(Node));
  
  node->next = list;
  node->prev = list->prev;
  node->value = value;
  
  list->prev->next = node;
  list->prev = node;
  list->size += 1;
  return node;
}

int deque_top(Node* list) {
  return list->value;
}

void deque_print(Node* list) {
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

int deque_get(Node* list, int index){
  return 0;
}