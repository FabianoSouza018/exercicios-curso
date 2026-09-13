#include <stdio.h>
#include <math.h>

int main() {

    //declaração das variaveis
    float celsius, fahrenheit;

    //entrada
    printf("Digite a temperatura em Fahrenheit\n");
    scanf("%f", &fahrenheit);

    //processamento
    celsius= ((fahrenheit-32)*5)/9;
    celsius= round(celsius * 10.0)/10.0; //linha para arrendondar 26.66666 = 26.700001 - truncamento

    //saida
    printf("Temperatura Celsius: %.1f", celsius);

    return 0;

}