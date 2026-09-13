#include <stdio.h>

int main() {
    int n, contador, idade, somaIdade, contA, contB;
    float altura, somaAltura;
    float mediaIdade, mediaAltura;
    printf("Digite a quantidade de numeros:");
    scanf(" %d", &n);
    //leitura dos dados
    contador = 0;
    contA = 0;
    contB = 0;
    somaAltura = 0;
    somaIdade = 0;
    while(contador < n){
        //ler valor digitado
        printf("Idade %d:", contador+1);
        scanf(" %d", &idade); 
        printf("Altura %d:", contador+1);
        scanf(" %f", &altura);
        //filtra
        if (altura < 1.70){
            somaIdade += idade;
            contA++;
        }
        if (idade > 20) {
            somaAltura += altura;
            contB++;
        }
        contador++;
    }
    mediaIdade = somaIdade/contA;    
    mediaAltura=somaAltura/contB;
    printf("Idade média dos alunos com menos de 1.70m de altura = %.2f\n", mediaIdade);
    printf("Altura média dos alunos com mais de 20 anos = %.2f\n", mediaAltura);
}