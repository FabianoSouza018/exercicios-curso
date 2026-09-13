#include <stdio.h>

int main() {

    //declaração das variaveis
    float DescParafuso, DescPorca, DescArruelas;
    float ParafusoValor, PorcaValor, ArruelasValor;
    int QtdParafuso, QtdPorca, QtdArruelas;
    float ParafusoVenda, PorcaVenda, ArruelaVenda;
    float ValorTotal, Desconto, ValorFinal;
    float DescontoParafuso, DescontoPorca, DescontoArruela;

    //dados de entrada
    printf("\nTabela de Quantidade, Preco e Desconto\n\n");

    printf("Digite a quantidade vendida de Parafusos.:  ");
    scanf("%d", &QtdParafuso);

    printf("Valor Unitario.:    ");
    scanf("%f", &ParafusoValor);

    printf("Percentual de desconto(%%).:    ");
    scanf("%f", &DescParafuso);

    printf("Digite a quantidade vendida de Porcas.: ");
    scanf("%d", &QtdPorca);

    printf("Valor Unitario.:    ");
    scanf("%f", &PorcaValor);

    printf("Percentual de desconto(%%).:    ");
    scanf("%f", &DescPorca);

    printf("Digite a quantidade vendida de Arruelas.:   ");
    scanf("%d", &QtdArruelas);

    printf("Valor Unitario.:    ");
    scanf("%f", &ArruelasValor);

    printf("Percentual de desconto(%%).:    ");
    scanf("%f", &DescArruelas);

    //processamento
    ParafusoVenda = QtdParafuso * ParafusoValor;     
    PorcaVenda = QtdPorca * PorcaValor;
    ArruelaVenda = QtdArruelas * ArruelasValor;   
    
    DescParafuso = DescParafuso / 100.0;
    DescPorca = DescPorca / 100.0;
    DescArruelas = DescArruelas / 100.0;

    DescontoParafuso = ParafusoVenda * DescParafuso;
    DescontoPorca = PorcaVenda * DescPorca;
    DescontoArruela = ArruelaVenda * DescArruelas;

    ValorTotal = ParafusoVenda + PorcaVenda + ArruelaVenda;
    Desconto = DescontoParafuso + DescontoPorca + DescontoArruela;
    ValorFinal = ValorTotal - Desconto;

    //saida
    printf("\n Total a Pagar\n\n");
    
    printf("Valor Total.: %5.2f\n", ValorTotal);
    printf("Desconto....: %5.2f\n", Desconto);
    printf("Valor Final.: %5.2f\n", ValorFinal);

return 0;
}