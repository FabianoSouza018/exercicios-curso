#include<stdio.h>

int main() {

    float valor = 1;
    float total = 0;

    while(valor > 0) {
        printf("Digite o valor.: ");
        scanf("%f", &valor);

        
        if(valor > 0){
            total = total + valor;
    }
}
    printf("Total acumulado da compra: R$ %.2f\n", total);

    return 0;
}
