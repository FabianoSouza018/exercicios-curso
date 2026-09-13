#include <stdio.h>

int main() {

int numero_X, numero_Y, i, soma = 0;

     printf("Digite o valor de X.:");
     scanf(" %d", &numero_X);

    printf("Digite o valor de Y.:");
     scanf(" %d", &numero_Y);

     printf("i antes = %d", i);
     
     for( i=1; i<=numero_X; i++) {
          soma = soma + numero_Y;

     }
     printf("%d * %d = %d\n", numero_X, numero_Y, soma );

     printf("i depois = %d\n", i);
}