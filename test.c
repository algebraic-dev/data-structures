#include <stdbool.h>

void is(char* name, bool result){
    if(result) {
        printf("\033[0;32m   ●   | test '%s' succeded!\033[0m\n", name);
    } else {
        printf("\033[0;31m   ●   | test '%s' failed\033[0m\n", name);
    }
}

void describe(char* name){
    printf("\n\n%s\n\n", name);
}