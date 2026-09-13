#include <stdio.h>
#include <math.h>

int main () 
{
//Dados de entrada
    int X = 7;
    int Y = 11;

//Cálculos
    X = X + Y; // "X = ?" 7 + 11 = 18 "X = 18"
    Y = X - Y; // "Y = ?" 18 - 11 = 7 "Y = 7"
    X = X - Y; // "X = ?" 18 - 7 = 11 Final X = 11 Y = 7

//Saida
    printf("X = %d, Y = %d", X, Y);

    return 0;
}