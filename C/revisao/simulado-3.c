#include <stdio.h>

int main() {

    float renda, imposto, desconto, salario;

    printf("Digite salario\n");
    printf("Digite valor(R$).: \n");
    scanf("%f", &salario);

    if (renda < 2000.0) {
        imposto = 0;      
    } else if (renda >= 2001.0 && renda <= 5000.0){
        imposto = renda * 0.1;
        desconto = renda - imposto;
    } else if (renda > 5000.1 && renda >= 1000.0){
        imposto = renda * 0.2;
        desconto = renda - imposto;
    } else if (renda > 10000.0){
        imposto = renda * 0.3;
        desconto = renda - imposto;          
    }

     printf("Imposto de renda.: R$ %f", renda);
}