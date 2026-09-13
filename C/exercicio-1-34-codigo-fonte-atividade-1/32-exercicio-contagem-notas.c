#include <stdio.h>

int main() {
    
    //declaração das variaveis
    int valor, notas1, notas5, notas20, notas100;

    //dados e entrada
    printf("\nSolicitação de saque\n\n");
    printf("Por favor digite valor solicitado.: R$  ");
    scanf("%d", &valor); // 574

    //processamento
    notas100 = valor / 100; // 500 / 574 = 5,74 notas de 100 5,74
    valor = valor % 100; // % resto    = 5,74 resto % = 74

    notas20 = valor / 20; //74 / 20 = 3,7
    valor = valor % 20;

    notas5 = valor / 5; //14 / 5
    valor = valor % 5;

    notas1 = valor;   //4 sobra
    
    //saida
    printf("\nCedulas disponiveis R$ 1, 5, 20, 100\n\n");
    printf("Notas de R$ 100.: %d\n", notas100);
    printf("Notas de R$ 20..: %d\n", notas20);
    printf("Notas de R$ 5...: %d\n", notas5);
    printf("Notas de R$ 1...: %d\n", notas1);

    return 0;
}