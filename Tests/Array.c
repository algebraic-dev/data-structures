#include<Array/array.c>

void array_tests(){
    describe("Array Tests");
    
    Array* arr = init();

    push(arr, 30);
    push(arr, 10);
    push(arr, 20);
    push(arr, 3);
    push(arr, 4);
    push(arr, 5);

    int popped = pop(arr);
    is("Pushed 2,3,4 and popped 5 from array", popped == 5);

    popped = pop(arr);
    is("Popped 4 from array", popped == 4);

    is("Get array top", top(arr) == 3);

    is("Get second index", get(arr, 2) == 20);

}
