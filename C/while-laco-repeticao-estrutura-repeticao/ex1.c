#include <stdio.h>

int main() {
    int N;        //variavel de leitura
    int contador; 
    //entrada
    printf("Digite um valor N:");
    scanf(" %d", &N);
    
    //processamento
    contador = N;
    while (contador > 0) {
        printf("%d\n", contador);
        //contagem regressiva
        contador--;
    }
    printf("Máquina iniciado!\n");
}