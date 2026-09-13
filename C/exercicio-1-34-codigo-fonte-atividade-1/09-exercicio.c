#include <stdio.h>
#include <math.h> 

    // Para poder truncar valores é necessario adicionar a biblioteca #include <math.h> - linha 2
    //trunc() - remove a parte decimal do numero(não arredonda) 
    // num * 100 desloca duas casas decimais 
    //trunc() corta as casas extras - linha 33
    // = /100 volta o numero posição normal
    // trunc - para arrendor casas descimais multiplica por 10 ou 100.
    // depois divide por 10 ou 100 novamente.
    // Saida 6.666667 --> função "trunc" truncando 6.66 - linha 36

int main()
{
    int Nota1, Nota2, Nota3, total; //numeros inteiros
    float qfrac; // numeros fracionados decimais
    
    printf("Nota 1\n");
    printf("Digite nota 1..:    "); //digitar nota 1
    scanf("%d", &Nota1);

    printf("Nota 2\n");
    printf("Digite nota 2..:    "); //digitar nota 2
    scanf("%d", &Nota2);

    printf("Nota 3\n");
    printf("Digite nota 3..:    "); //digitar nota 3     
    scanf("%d", &Nota3);

    total = Nota1 + Nota2 + Nota3; // resultado inteiro
    qfrac = (float) total / 3; //resultado será decimal necessario usar float e qfrac

    qfrac = trunc(qfrac * 100) / 100; //truncando valores sem arrendondar, cortando casas decimais.

    printf("Total das notas = %d\n", total); //total nuemros inteiros 5,8 e 7.
    printf("Média de nota = %.2f\n", qfrac); //media numero decimal 6.666667 - necessario truncar - 6.66

    return 0;
}