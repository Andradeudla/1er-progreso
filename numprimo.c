#include <stdio.h>
int main() {
    int num, i, numprimo = 0;

    printf("Ingrese un numero entero: ");
    scanf("%d", &num);

    for(i = 2; i <= num/2; ++i) {
        if(num%i == 0) {
            numprimo = 1;
            break;
        }
    }
    if (num == 1) {
        printf("1 no es primo.");
    }
    else {
        if (numprimo == 0)
            printf("%d es un numero primo.", num);
        else
            printf("%d no es un numero primo.", num);
    }
    
    return 0;
}