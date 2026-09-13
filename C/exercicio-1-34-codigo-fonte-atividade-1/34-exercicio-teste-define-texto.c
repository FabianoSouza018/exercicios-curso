#include <stdio.h>

#define DIAS_ANOS 365
#define DIAS_MES 30

#define TEXTO_ANO "ano(s)"
#define TEXTO_MES "mes(es)"
#define TEXTO_DIA "dia(s)"

int main() {

    int anos, meses, dias;

    printf("\nCalcule total de dias\n\n");
    printf("Digite total de dias.:  ");
    scanf("%d", &dias);

    anos = dias / DIAS_ANOS;
    dias = dias % DIAS_ANOS;

    meses = dias / DIAS_MES;
    dias = dias % DIAS_MES;

    printf("\nTotal de Anos, Meses e Dias\n\n");
    printf("Tempo %d %s, %d %s, %d %s\n",
           anos, TEXTO_ANO,
           meses, TEXTO_MES,
           dias, TEXTO_DIA);

    return 0;
}