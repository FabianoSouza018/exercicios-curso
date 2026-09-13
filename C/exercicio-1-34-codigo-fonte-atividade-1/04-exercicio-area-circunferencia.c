#define _USE_MATH_DEFINES // utilizar a linha para conseguir usar a variavel M_PI
#include <stdio.h>
#include <math.h> // biblioteca com mais funcões pré definidas de constantes matematicas

int main() {
    float raio, area;

    printf("Calculo da Area da Circunferencia\n");
    printf("Informe o valor do raio: ");
    scanf("%f", &raio);

   area = M_PI * pow(raio, 2);

// area = 3.141592 * raio * raio; //exemplo " area = M_PI * raio * raio "  usando função pow " area = M_PI * pow(raio,2); "
// M_PI - numero de PI com 20 casas descimais - busca na biblioteca - precisa adicionar a biblioteca " #include <math.h> "
// A função pow() em C, localizada na biblioteca <math.h>, é utilizada para calcular a potência de um número, 
// elevando uma base () a um expoente (), no formato pow(base, expoente).
// Ela retorna um valor do tipo double e exige que você inclua #include <math.h> no código.
// Bibloteca da WEB com todas as funções do C/C++ cplusplus.com

    printf("area = %f\n", area);

}