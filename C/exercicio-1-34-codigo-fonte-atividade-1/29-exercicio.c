#include <stdio.h>

int main() {

    //declaração da variaveis
    int valor;
    float pagamentodinheiro, pagamentodebito;
    float cartaodecredito, parcelamentocredito;
    float descdinheiro, descdebito;
    float acrescimo1x, acrescimo3x;

    //dados de entrada
    printf("\nFormas de pagamento.:\n\n");
    printf("Desconto de 5%% pagamento em dinheiro.\n");
    printf("Desconto de 2%% pagamento em debito.\n");
    printf("1x no cartão de credito, acréscimo de 3%%.\n");
    printf("Parcele no cartão em até 3x, acréscimo de 5%% na parcela.\n\n");

    printf("Digite valor do smartfone R$.:  ");
    scanf("%d", &valor);

    //processamento
    descdinheiro = descdinheiro / 100.0;
    descdebito = descdebito / 100.0;

    pagamentodinheiro = valor - (valor * 0.05);
    pagamentodebito = valor - (valor * 0.02);

    cartaodecredito = valor + (valor * 0.03);
    parcelamentocredito = (valor * 1.05) / 3;

    //saida
    printf("\nTotal detalhado a pagar\n\n");
    printf("Dinheiro.: %.2f\n", pagamentodinheiro);
    printf("Debito.: %.2f\n", pagamentodebito);
    printf("Crédito 1x.: %.2f\n", cartaodecredito);
    printf("Crédito 3x.: %.2f (3x)\n", parcelamentocredito);

    return 0;
}