#include <stdio.h>

int main() {
    int n, i;
    char nome[50];

    float salario, soma = 0;
    float maior, menor;
    char nomeMaior[50], nomeMenor[50];

    printf("Funcionarios.: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        printf("Nome.........: ");
        scanf("%s", nome);

        scanf("%f", &salario);

        soma = soma + salario;

        if (i == 1) {
            maior = salario;
            menor = salario;
            sprintf(nomeMaior, "%s", nome);
            sprintf(nomeMenor, "%s", nome);
        } else {
            if (salario > maior) {
                maior = salario;
                sprintf(nomeMaior, "%s", nome);
            }

            if (salario < menor) {
                menor = salario;
                sprintf(nomeMenor, "%s", nome);
            }
        }
    }

    printf("Media.........: %.0f\n", soma / n);
    printf("Maior Salario.: %s %.0f\n", nomeMaior, maior);
    printf("Menor Salario.: %s %.0f\n", nomeMenor, menor);

    return 0;
}