#include <Deque/deque.c>

void deque_tests(){
    describe("Deque Tests");
    
    Node* arr = deque_init(10);
    deque_push(arr, 1);
    deque_push(arr, 2);
    deque_push(arr, 3);
    deque_push(arr, 4);
    deque_push(arr, 5);

    int popped = deque_pop(arr);
    is("Pushed 2,3,4 and popped 5 from deque", popped == 5);
    popped = deque_pop(arr);
    is("Popped 4 from deque", popped == 4);

    deque_push(arr, 5);

    popped = deque_pop(arr);
    is("Popped 5 from deque", popped == 5);

    arr = deque_shift(arr);
    is("Shiffed deque to get 1", arr->value == 1);

    arr = deque_shift(arr);
    is("Shiffed deque  to get 3", arr->value == 2);

    arr = deque_unshift(arr, 33);
    is("Unshiffted deque 33", arr->value == 33);
    
    arr = deque_shift(arr);
    is("Shiffted deque", arr->value == 2);
}