#include <stdio.h>
#include <math.h>

int main() {

    //declaração das variaveis
    float celsius, fahrenheit;

    //entrada
    printf("Digite a temperatura em Celsius\n");
    scanf("%f", &celsius);

    //processamento
    fahrenheit= ((9*celsius)/5+32);

    //saida
    printf("Temperatura Fahrenheit: %.1f", fahrenheit);

    return 0;

}