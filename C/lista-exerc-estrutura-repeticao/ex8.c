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
    contador = 0;
    soma = 0;
    while (contador < numero) {
        //formula
        soma = soma + (float) (numero-contador)/(contador+1);
        //incremento
        contador++;   

    }
    //saida
    printf("Resultado: %f\n", soma);    
}