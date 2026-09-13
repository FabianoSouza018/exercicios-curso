#include <stdio.h>

int main() {
    int idade; //variável de controle

    printf("Digite sua idade:");
    scanf(" %d", &idade);

    while(idade > 20) {
        printf("Idade: %d\n", idade);

        printf("Digite sua idade:");
        scanf(" %d", &idade);
    }    
}