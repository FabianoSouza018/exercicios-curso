#include <stdio.h>

int main() {

    //declaração das variaveis
    int horas, minutos, segundos, mls;

    //dados de entrada
    printf("\nCalculadora de tempo\n\n");
    printf("Digite os segundos.:  ");
    scanf("%d", &segundos);

    //processamento
    horas = segundos / 3600;
    segundos = segundos % 360;

    minutos = segundos / 60;
    segundos = segundos % 60;

    //saida
    printf("\nCalculo de tempo\n\n");
    printf("Tempo %dh %dmin %ds", horas, segundos, minutos);

    return 0;
}