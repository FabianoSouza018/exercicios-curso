#include <stdio.h>

int main() {

//float utilizar quando não precisa de tanta precisão e para economizar memoria.
//double quando precisa de precisão.
//*Linha 31 =%.2f, ao utilizar *.2* será exibida apenas duas casas decimais.
//Caso precise de mais casas descimais alterar apenas o *2* para um numero superior, e menos diminuir.

    float comida ; //Dados de entrada - 28.50
    float peso ;  //Dados de entrada - 0.470
    float bebida ; //Dados de entrada - 2.50
    float valor ; //Valor esperado
    
    printf("Informe valor da comida\n");
    printf("Valor comida...:    ");
    scanf("%f", &comida);

    printf("Infome peso da comida\n");
    printf("Informe Peso...:    ");
    scanf("%f", &peso);

    printf("Informe valor da bebida\n");
    printf("Valor bebida...:    ");
    scanf("%f", &bebida);
       
    valor = comida * peso + bebida;
   
    printf("Valor Total a pagar = %.2f\n", valor);
}