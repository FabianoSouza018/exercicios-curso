#include <stdio.h>

int main(){

    // declaração das variáveis
    int m1, m5, m10, m25, m50, m100;
    float total;

    // entrada
    printf("Digite a quantidade de moedas:\n");
    printf("Moedas 0.01: ");    scanf("%d", &m1);
    printf("Moedas 0.05: ");    scanf("%d", &m5);
    printf("Moedas 0.10: ");    scanf("%d", &m10);
    printf("Moedas 0.25: ");    scanf("%d", &m25);
    printf("Moedas 0.50: ");    scanf("%d", &m50);
    printf("Moedas 1.00: ");    scanf("%d", &m100); 
    
    // processamento
    total = (m1 * 0.01) + (m5 * 0.05) + (m10 * 0.10) +
            (m25 * 0.25) + (m50 * 0.50) + (m100 * 1.00);

    // saída
    printf("Total do Cofre: %.2f\n", total);

    return 0;
}