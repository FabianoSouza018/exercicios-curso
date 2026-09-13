#include <stdio.h>

int main() {
    char resposta='S'; //variavel de leitura
    int produto, contador = 0; //variavel para contagem

    while (resposta == 'S' || resposta == 's'){
        //simula o registro de um produto
        printf("Digite o produto: ");
        scanf(" %d", &produto);
        contador++; //conta

        printf("Deseja continuar? (S/N)");
        scanf(" %c", &resposta);
    }
    printf("Quantidade de produtos cadastrados: %d", contador);
}