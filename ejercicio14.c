#include <stdio.h>

int main (){
    int i;

    printf("Los primeros 20 múltiplos de 3 son:\n");

    for(i = 1; i <= 20; i++) {
        printf("%d ", 3 * i);
    }
    return 0;
}