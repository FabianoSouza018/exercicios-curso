#include <stdio.h>

int main() {

    //declaração das variaveis
    int idade;

    //dados de entrada
    printf("Digite a idade...\n");
    printf("Idade..: ");
    scanf("%d", &idade);

    //decisões
    if (idade <= 12) {
        printf("Crianca...\n");
    } else if (idade <= 17) {
        printf("Jovem...\n");
    } else if (idade >= 19 && idade <= 59) {
        printf("Adulto...\n");
    } else if(idade >= 60) {
        printf("Melhor idade...\n");
    } else {
        printf("Idade 18 anos");
    }

    return 0;
}