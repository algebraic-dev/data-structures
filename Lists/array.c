
#include <stdio.h>
#include "array.h"
#include "malloc.h"

Array* init(){
    Array* arr = malloc(sizeof(Array));
    arr->capacity = 8;
    arr->used = 0;
    arr->data = malloc(arr->capacity*sizeof(int));
    return arr;
}

// O array cresce por um fator de 1.5  
void push(Array* arr, int value){
    if (arr->capacity <= arr->used+1) {
        arr->capacity = (arr->capacity*3)/2;
        arr->data = realloc(arr->data, (size_t) arr->capacity*sizeof(int));
    }
    arr->data[arr->used] = value;
    arr->used += 1;
}   

int pop(Array* arr) {
    if (arr->used-1 < arr->capacity*2/3){
        arr->capacity = arr->capacity*2/3;
        arr->data = realloc(arr->data, arr->capacity);
    }
    arr->used -= 1;
    return arr->data[arr->used];
}

int top(Array* arr){
    return arr->data[arr->used-1];
}

void print(Array* arr){
    printf("[");
    for(int i = 0; i < arr->used; i++){
        if(arr->used != i+1){
            printf("%d, ", arr->data[i]);
        }else{
            printf("%d", arr->data[i]);
        }
    }
    printf("]\n");
}

int get(Array* arr, int index){
    if (arr->used <= index){
        printf("[ERROR] The length of the array is %d and you tried to access %d\n", arr->used, index);
        return 0;
    } else {
        return arr->data[index];
    }
}
