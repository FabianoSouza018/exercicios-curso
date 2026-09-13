#include <stdio.h>

int main() {

    //declaração das variaveis
    int anos, meses, dias;

    //dados de entrada
    printf("\nCalcule total de dias\n\n");
    printf("Digite total de dias.:  ");
    scanf("%d", &dias);

    //processamento
    anos = dias / 365;
    dias = dias % 365;

    meses = dias / 30;
    dias = dias % 30;

    //saida
    printf("\nTotal de Anos, Meses e Dias\n\n");
    printf("Tempo %d ano(s), %d mes(es), %d dias", anos, meses, dias);

    return 0;
}