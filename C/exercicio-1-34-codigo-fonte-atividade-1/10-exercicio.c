#include <stdio.h>

int main()
{
    int a, b, som, pro;

    printf("Quadrado da soma de A + B\n");
    printf("Digite valor de A.: ");
    scanf("%d", &a);
    
    printf("Quadrado da soma de A + B\n");
    printf("Digite valor de B.: ");
    scanf("%d", &b);

    pro = (a + b) * (a + b);
    som = (a * a) + (b * b);
    
    printf("Quadrado da soma  (A + B)² = %d\n", pro);
    printf("Soma dos quadrados a² + b² = %d\n", som);

    return 0;
}