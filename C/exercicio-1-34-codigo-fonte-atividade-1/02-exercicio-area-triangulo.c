#include <stdio.h>

int main() {
    int base, altura; // dados de entrada
        float area; // resultado esperado
    
    printf("02 - Area do Triangulo\n");
    printf("Informe a Base..: ");
    scanf("%d", &base);
    printf("Informe a Altura: ");
    scanf("%d", &altura);

    area = base * altura / 2.0; // opcao se eu tiver um numero fixo na formula
    area = (float)base * altura / 2; // opcao que funciona para todos os casos

    printf("Area do Triangulo = %.3f\n", area);
}