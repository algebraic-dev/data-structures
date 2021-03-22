// Felipe G. - 2021


// Um Array é uma estrutura de dados que guarda dados 
// e pode ser acessado por um índice

typedef struct array {
    int capacity;
    int used;
    int* data;
} Array;

// Cria uma lista com capacidade para 8 elementos
Array* init();

// Coloca um elemento no topo do array
void push(Array* arr, int value);

// Remove alguma coisa do topo do array
int pop(Array* arr);

// retorna o topo do array
int top(Array* arr);

// Pega o valor no indice
int get(Array* arr, int index);

// imprime o array para a tela.
void print(Array* arr);