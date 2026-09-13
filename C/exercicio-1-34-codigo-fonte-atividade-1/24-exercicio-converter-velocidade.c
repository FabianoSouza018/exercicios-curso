#include <stdio.h>
#include <math.h>

int main(){

    //declaração de variáveis
    float velocidadeK, velocidadeM;

    //entrada
    printf("Exercício 24 - Conversão de medidas\n");
    printf("Informe a velocidade em km/h:\n");
    scanf(" %f", &velocidadeK);

    //processamento
    velocidadeM= velocidadeK*1000/3600; //regra de três

    velocidadeM=  velocidadeK / 3.6; //formula simplificada, eliminando os zeros

    //saída
    printf("Velocidade em m/s:%.1f", round(velocidadeM*10)/10.0);

    return 0;
}