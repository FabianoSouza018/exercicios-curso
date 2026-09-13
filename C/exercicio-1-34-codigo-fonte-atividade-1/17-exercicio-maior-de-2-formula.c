#include <stdio.h>
#include <stdlib.h> // abs
#include <math.h> // fabs

// int -> %d
// float -> %f
// double -> %lf
// char -> %c

int main() {
    float x, y, maior;

    printf("17 - Determinar o Maior de 2 Numeros\n");
    printf("Informe o valor de X: ");
    scanf("%f", &x);
    printf("Informe o valor de Y: ");
    scanf("%f", &y);

    maior = (x + y + fabs(x-y)) / 2;

    printf("O maior valor é %f\n", maior);
}