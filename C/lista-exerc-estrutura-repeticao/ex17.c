#include <stdio.h>

int main() {
    int n, contador, valor;
    int soma = 0, maior=-999999999,menor=999999999;
    float media;
    printf("Digite a quantidade de numeros:");
    scanf(" %d", &n);
    //leitura dos dados
    contador = 0;
    while(contador < n){
        //ler valor digitado
        printf("Digite um valor:");
        scanf(" %d", &valor);
        //verificar se o valor digitado é maior 
        if (valor > maior){
            maior = valor; //atualizar o valor
        }
        if (valor < menor){
            menor = valor;
        }
        soma += valor;  
        contador++;
    }
    media = soma/n;
    printf("Média: %.2f\n", media); 
    printf("Maior: %d\n", maior); 
    printf("Menor: %d\n", menor); 
}