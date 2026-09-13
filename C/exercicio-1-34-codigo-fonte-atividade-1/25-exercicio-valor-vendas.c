#include <stdio.h>
#include <math.h>

int main (){

    //declaração das variaveis
    int bonus;
    float Tpremio, Tvendas;
    float premio1, premio2, premio3;
    float fulano, beltrano, ciclano;

    //dados de entrada
    printf("Digite valor do bonus:\n");         scanf("%d", &bonus);
    printf("Digite as vendas de Fulano:\n");    scanf("%f", &fulano);
    printf("Digite as vendas de Beltrano:\n");  scanf("%f", &beltrano);
    printf("Digite as vendas de Ciclano:\n");   scanf("%f", &ciclano);

    //processamento
    Tvendas= bonus / (fulano + beltrano + ciclano);
    premio1= Tvendas * fulano;
    premio2= Tvendas * beltrano;
    premio3= Tvendas * ciclano;
    Tpremio= premio1 + premio2 + premio3;

    //saida
    printf("Prêmio vendas 1° = %.2f\n", premio1);
    printf("Prêmio vendas 2° = %.2f\n", premio2);
    printf("Prêmio vendas 3° = %.2f\n", premio3);
    printf("Total Premio= %.2f\n", Tpremio);
    
    return 0;
}