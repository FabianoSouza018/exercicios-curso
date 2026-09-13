#include <stdio.h>

int main() {

    int ini, fim, i;
    int soma = 0, contador = 0;
    float media;

    printf("Digite o numero inicial.: ");
    scanf(" %d", &ini);

    printf("Digite o numero final.: ");
    scanf(" %d", &fim);

    i = ini;
    while (i <= fim) {
        printf("%d\n", i);
        contador = contador + 1; /*contador*/ 
        soma = soma + i; /*acumulador*/

        i++;
    }
    media = (float)soma / contador;
    printf("soma.: %d\n", soma);
    printf("contador.: %d\n", contador);
    printf("media.: %d\n", media);

    return 0;

}