#include <stdio.h>

int main() {
    int num1, num2, i;

    printf("Introduce el primer número: ");
    scanf("%d", &num1);

    printf("Introduce el segundo número: ");
    scanf("%d", &num2);

    printf("Los números enteros entre %d y %d son:\n", num1, num2);

    for(i = num1 + 1; i < num2; i++) {
        printf("%d ", i);
    }

    return 0;
}
