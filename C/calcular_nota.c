#include<stdio.h>

int main() {

    float nota = 0, media;
    float soma_notas = 0, contar_provas = 0;

    printf("Digite a nota (ou -1 para sair).:\n");
    scanf("%f", &nota);

    // Se a primeira nota já for maior ou igual a 0, abrimos o laço
    while(nota >= 0) {
        // 1. Como a nota é válida, acumulamos e contamos ela primeiro!
        contar_provas++;
        soma_notas += nota;

        // 2. Só agora pedimos a PRÓXIMA nota
        printf("Digite a próxima nota (ou -1 para sair).:\n");
        scanf("%f", &nota); 
        // Se o usuário digitar -1 aqui, o while vai voltar lá no topo,
        // ver que nota >= 0 é falso e vai sair SEM somar o -1!
    }

    // 3. Corrigindo a fórmula da média (divisão com /)
    // Usamos um IF para garantir que o usuário digitou pelo menos 1 nota
    if (contar_provas > 0) {
        media = soma_notas / contar_provas;
        printf("\nQuantidade de provas: %.0f\n", contar_provas);
        printf("Soma de todas as notas: %.2f\n", soma_notas);
        printf("Média final do aluno: %.2f\n", media);
    } else {
        printf("Nenhuma nota válida foi digitada.\n");
    }

    return 0;
}
