#include <stdio.h>

int main(){

    //declaração das variaveis - precisa melhorar a descrição da mesma.
    float paozinho, broa;
    float Valpaozinho, Valbroa;
    float Tvendas, Poupanca;
    float Percentual;

    //dados de entrada - evitar usar printf e scanf na mesma linha
    printf("Vendas Diarias\n\n"); //apresentação
    printf("Paozinho quantidade vendida Unid.:    ");           scanf("%f", &paozinho);
    printf("Valor unitario paozinho R$.:    ");                 scanf("%f", &Valpaozinho);
    printf("Broa quantidade vendida Unid.:    ");               scanf("%f", &broa);
    printf("Valor unitario broa R$.:    ");                     scanf("%f", &Valbroa);
    printf("Porcentagem desejada poupança %%:   ");             scanf("%f", &Percentual); //escolher a porcentagem 1...100.

    //processamento
    Tvendas = (paozinho * Valpaozinho) + (broa * Valbroa);
    Percentual = Percentual / 100.0; // converte porcentagem para decimal
    Poupanca = Tvendas * Percentual; 
    
    //saida
    printf("\nResumo das vendas\n\n"); //apresentação
    printf("Total vendido R$.: %.2f\n", Tvendas);
    printf("Poupanca R$.: %.2f\n", Poupanca);
    printf("Percentual da Poupança: %.0f%%\n", Percentual * 100); //- %% imprimir o simbolo de porcetagem, 
                                                                //calculo direto no printf - "Percentual * 100"

    return 0;

}