#include <stdio.h>

int main()
{   

 int a, b, som, dif, pro, qint;
 int resto;
 double qfrac;

 printf("A + B igual\n");
 printf("Digite valor de a...:  ");
 scanf("%d", &a);

 printf("A + B igual\n");
 printf("Digite valor de b...:  ");
 scanf("%d", &b);

 som = a + b;
 dif = a - b;
 pro = a * b;
qint = a / b;
qfrac = (double) a / b;
 resto = a % b;

printf("Soma de a + b      = %d\n", som);
printf("Diferença de a - b = %d\n", dif);
printf("Produto de a * b   = %d\n", pro);
printf("Quoc Inteiro a / b = %d\n", qint);
printf("Quoc Fraci a / b   = %.6lf\n", qfrac);
printf("      Resto        = %d\n", resto);

return 0;
// #include <stdio.h> - biblioteca.
// int - numeros inteiros.
// a, b seria numeros bases que foram digitados pelo usuário e armazenado automaticamente pelo software.
// som = soma, dif = subtração, pro = multiplicação, quo = divisão ou qint = para divisão de numeros inteiros Exemplos: 1, 20, 300...
// qfrac = divisão de numeros fracionados Exemplo.: 1.5, 0.89, 3.141592...
// resto = sobra de divisão.
// Si atentar na utilização do float ou double, caso seja necessario mais precisão usar double, já menos usar float.
// printf é a função usada para exibir mensagens, textos e valores de variáveis na tela.
// scanf ler dados digitados  pelo usuario e armazená-los em variaveis.
}