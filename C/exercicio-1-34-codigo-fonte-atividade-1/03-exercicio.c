#include <stdio.h>

int main(){

    //declaração das variaveis
    int altura, largura, profundidade, volume;

    //entrada
    printf("Digite o valor da altura, largura, profundidade:\n");
    scanf("%d %d %d", &altura, &largura, &profundidade);
    
    //processamento
    volume= altura * largura * profundidade;

    //saida
    printf(" O volume é: %d\n", volume);

    return 0;
}