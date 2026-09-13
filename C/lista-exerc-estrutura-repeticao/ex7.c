#include <stdio.h>

int main() {
    //declaração de variáveis
    int numero;
    int contador;
    float soma;
    //entrada
    printf("Digite um numero:");
    scanf(" %d", &numero);
    //processamento
    contador = 1;
    soma = 0.0;
    while (contador <= numero) {
        //soma += numero/contador;
        soma = soma + numero/contador;
        //incremento
        contador++;   
    }
    //saida
    printf("Resultado: %f\n", soma);    
}