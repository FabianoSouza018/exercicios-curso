#include <stdio.h>

int main() {

    int numero, quadrado, cubo;

    printf("Numero\tQuadrado\tCubo\n");

    numero = 1;
    while (numero <= 10) {

        quadrado = pow(numero, 2);
        cubo = pow(numero, 3);
        
        printf("%d\t%d\t\t%d\n", numero, quadrado, cubo);

        numero++;
    }

    return 0;
}