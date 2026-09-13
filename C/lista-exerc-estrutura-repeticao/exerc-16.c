#include <stdio.h>

int main() {
    int ini, fim, soma = 0, cont = 0;
    char tipo;

    scanf("%d", &ini);
    scanf("%d", &fim);
    scanf(" %c", &tipo);

    while (ini <= fim) {
        if (tipo == 'P' || tipo == 'p') {
            if (ini % 2 == 0) {
                printf("%d ", ini);
                soma = soma + ini;
                cont = cont + 1;
            }
        } else if (tipo == 'I' || tipo == 'i') {
            if (ini % 2 != 0) {
                printf("%d ", ini);
                soma = soma + ini;
                cont = cont + 1;
            }
        }

        ini = ini + 1;
    }

    printf("\nSoma.: %d", soma);
    printf("\nCont.: %d", cont);

    return 0;
}