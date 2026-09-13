#include <stdio.h>

int main() {
    int valor = 2; //variável de controle

    while(valor < 100) {
        printf("Valor: %d\n", valor);

        valor = valor * 2;
    }    
}