#include <stdio.h>

#define DIAS_ANOS 365
#define DIAS_MES 30

int main() {

    //declaração das variaveis
    int anos, meses, dias;

    //dados de entrada
    printf("\nCalcule total de dias\n\n");
    printf("Digite total de dias.:  ");
    scanf("%d", &dias);

    //processamento
    anos = dias / DIAS_ANOS;
    dias = dias % DIAS_ANOS;

    meses = dias / DIAS_MES;
    dias = dias % DIAS_MES;

    //saida
    printf("\nTotal de Anos, Meses e Dias\n\n");
    printf("Tempo %d ano(s), %d mes(es), %d dias", anos, meses, dias);

    return 0;
}