#include <stdio.h>
#include <math.h>

int main (){
    
    //declaração de variavel
    float a,b, c;   
    float delta, x1, x2;   
    //entrada
    printf("Digite os valores de a,b,c:\n");
    scanf(" %g %g %g", &a, &b, &c);
    //processamento
    delta = b*b-4*a*c;
    x1 = (-b+sqrt(delta))/(2*a);
    x2 = (-b-sqrt(delta))/(2*a);
    //saida
    printf("Delta= %g x1= %g x2= %g", delta,x1,x2);

    return 0;
}