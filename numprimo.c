 #include <stdio.h>

 int main (void) {

    int num, i, numprimo = 1;

    printf("Ingrese un numero entero: ");
    scanf("%d", &num);

    for(i = 2; i <= num / 2; ++i) {
        if(num % i == 0) {
            numprimo = 0;
            break;
        }

        if (numprimo == 1)
        printf("%d es un numero primo.", num);

    return 0;
 }