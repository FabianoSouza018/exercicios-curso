#include <stdio.h>

int main() {

    float salariofixo, comissao;
    int qtdvendida;
    float valorcarrovendido, percentual;

    float comissaoqtd, comissaovalor;
    float comissaototal, salariofinal;

    printf("\nTabela salario vendedor:\n\n");

    printf("Salario fixo R$.: ");
    scanf("%f", &salariofixo);

    printf("Valor da comissao por carro R$.: ");
    scanf("%f", &comissao);

    printf("Quantidade de carros vendidos: ");
    scanf("%d", &qtdvendida);

    printf("Valor total dos carros vendidos: ");
    scanf("%f", &valorcarrovendido);

    printf("Percentual de comissao(%%): ");
    scanf("%f", &percentual);

    // processamento
    comissaoqtd = comissao * qtdvendida;
    percentual = percentual / 100.0;
    comissaovalor = valorcarrovendido * percentual;
    comissaototal = comissaoqtd + comissaovalor;
    salariofinal = salariofixo + comissaototal;

    // saída
    printf("\nTotal a receber\n\n");
    printf("Comissao por Qtde (200): %.2f\n", comissaoqtd);
    printf("Comissao por valor (2%%): %.2f\n", comissaovalor);
    printf("Comissao total.: %.2f\n", comissaototal);
    printf("Salario.: %.2f\n", salariofinal);

    return 0;
}