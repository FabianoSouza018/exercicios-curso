#include <stdio.h>

int main() {

    double diametro;               //Dados de entrada - double = mais precisão - float = menos precisão
    double volume;                 //Dados de entrada    
    double raio;                   //Dados de entrada 
    double pi = 3.141592;          //Dados de entrada valor de PI

    printf("Diametro da bola de futebol\n");
    printf("Digite o diametro...:   ");
    scanf("%lf", &diametro); //%lf - decimal mais preciso

// Obs: Perguntar ao professor, por qual motivo foi preciso utilizar double -->
//                       em todas as variaveis pra ter o resultado esperado.<--
//Usando int nos numeros inteiros e float nos decimais não fecha o valor esperado.

    raio = diametro / 2;
    volume = (4.0/3.0) * pi * (raio * raio * raio);

    printf("Raio da bola = %lf\n", raio); //Mostrar resultado do calculo do raio 10 / 2 = 5
    printf("Volume da bola = %.9lf\n", volume); //Mostra Resultado do calculo do volume (4.0/3.0) x 3.141592 x 5 x 5 x 5 -->
    // %.9lf mostra um total de 9 casas decima                                                             raio ao cubo. <--

 return 0; //Informa que o programa terminou corretamente sem falhas para o sistema operacional.

 //Versão do professor

 //define _USE_MATH_DEFINES
 //#include <stdio.h>
 //include <math.h>

 //int main()

 //float dia, raio, volume;

 //printf("diametro");
 //scanf("%f", &dia);

 //raio = dia / 2;
 //volume = 

}