#include <stdio.h>
#include <math.h>

#define HORAS25 1.25 // 100% + 25% = 125 / 100 = 1.25
#define HORAS50 1.50 // 100% + 50% = 150 / 100 = 1.50

int main() {

//declaração das variaveis
float Sal_bruto, Horas_normal, Valor_hora_normal, Soma_proventos;
float Horas_trabalhada25, Horas_trabalhada50, Horas_trabalhada;
float T_hora25, T_hora50 ;

//dados de entrada
printf("\nValores a receber\n\n");
printf("Digite o valor do salario bruto R$.:    "); //2970
scanf(" %f", &Sal_bruto);

printf("Digite o total de horas trabalhada hrs.:    "); //220
scanf(" %f", &Horas_trabalhada);

printf("Digite o total de hora extra (25%%).:   "); //18
scanf(" %f", &Horas_trabalhada25);

printf("Digite o total de hora extra (50%%).:   "); //12
scanf(" %f", &Horas_trabalhada50);

//processamento
Valor_hora_normal = Sal_bruto / Horas_trabalhada;
T_hora25 =  Valor_hora_normal * Horas_trabalhada25 * HORAS25;
T_hora50 =  Valor_hora_normal * Horas_trabalhada50 * HORAS50;
Soma_proventos = Sal_bruto + T_hora25 + T_hora50;


//saida
printf("\nTotal a receber\n\n");
printf("Valor hora normal.: R$ %9.2f\n", Valor_hora_normal);
printf("Valor horas extras 25%%....: R$ %9.2f\n", T_hora25);
printf("Valor horas extra 50%%.....: R$ %9.2f\n", T_hora50);
printf("Total Proventos......: R$ %9.2f\n", Soma_proventos);


return 0;
}