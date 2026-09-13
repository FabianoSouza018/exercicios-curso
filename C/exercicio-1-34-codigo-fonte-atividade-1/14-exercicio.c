#include <stdio.h>
#include <math.h>

int main()
{
//Dados de entrada
    int kminicial; //127543
    int kmfinal; //128129
    int kmpercorrido;
    float valorlitrogas; //3.39
    float valorabast; //153.48
    float precokm; 
    float kmlitro; 
    float litrosabast; 

    printf("\nDigite os valores correspondente:\n\n");
    printf("Km inicial: ");
    scanf("%d", &kminicial);

    printf("Km final:   ");
    scanf("%d", &kmfinal);

    printf("Preço Gasolina: ");
    scanf("%f", &valorlitrogas);

    printf("Valor abastecido:   ");
    scanf("%f", &valorabast);

//Calculos
    kmpercorrido = kmfinal - kminicial; // 128129 - 127543
    litrosabast = valorabast / valorlitrogas; //153.48 / 3.39
    kmlitro = kmpercorrido / litrosabast; // 586 / 45.27
    precokm = valorabast / (float)kmpercorrido; // 153.48 / 586
    
//Dados de Saida
    printf("\nResultados:\n\n");
    printf( " Km percorrido = %d\n" 
            " Litros abast = %.2f\n" 
            " Consumo Km/l = %.2f\n" 
            " Preço km = %.2f\n", 
            kmpercorrido, 
            litrosabast, 
            kmlitro, 
            precokm);

return 0;
} 