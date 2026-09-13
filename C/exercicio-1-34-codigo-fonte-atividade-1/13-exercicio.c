#include <stdio.h>
#include <math.h>

int main()
{
    //Dados de entrada
    int reais;
    float dolar = 4.06;
    float euro = 4.56;
    float peso = 0.43;

    printf("Digite valor em R$..: ");
    scanf("%d", &reais);

    //Cálculos
    dolar = reais / dolar;
    euro = reais / euro;
    peso = reais / peso;

    //Saída
    printf(" Dolares = %09.2f\n Euros = %09.2f\n Pesos = %09.2f\n", dolar, euro, peso);

    //Adicionar casas antes da virgula ou depois ex: 1.00 - 000001.00 é necessario incluir na variavel de saida "printf"
    //---------> "%09.2f" - 0 - preenche com zero (0) - 9(?) lagura total - .2 casas decimais - f numero float
    //                              (6 antes + 1 ponto + 2 depois = 9)  <---------------------------------
    //Obs: na questão pede para arredondar porém não está especifico.
    //variavel - round(valor) - arredonda para inteiros mais proximos "3.11 - 3.50 - 3.91" apos arredondar"3 - 4 - 4"
    //variavel - ceil(valor) - arredonda para cima "6.1" apos arredondar "6"
    //variavel - floor(valor) - arredonda para baixo - "9.9" apos arredondar "9.0"

    return 0;    
}