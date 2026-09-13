#include <stdio.h>
#include <math.h> // sqrt, pow

int main() {
    float a, b, pot, raiz;

    printf("Raiz Quadrada e Potencia\n");
    printf("Informe o valor de A: ");
    scanf("%f", &a);
    printf("Informe o valor de B: ");
    scanf("%f", &b);

    raiz = sqrt(a);
    pot = pow(a,b);

    printf("raiz = %f\n", raiz);
    printf("pot  = %f\n", pot);
}