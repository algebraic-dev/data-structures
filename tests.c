#include<stdio.h>
#include<test.c>
#include<Tests/Array.c>
#include<Tests/Deque.c>

void main(){
    array_tests();
    deque_tests();
    printf("\n\n");
}