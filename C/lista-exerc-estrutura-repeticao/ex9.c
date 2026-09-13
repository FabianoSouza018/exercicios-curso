#include <stdio.h>

int main() {
    int    contador;
    double numero;

    //processamento
    contador = 0;
    numero = 1;
    while(contador < 8*8){
        numero = numero*2;
        //incremento
        contador++;
    }
    printf("Graões : %lf", numero);
    
    double toneladas = (numero*0.065)/1000;
    printf("Toneladas: %lf\n", toneladas);
    double caminhoes = toneladas/45;
    printf("Caminhoes: %lf\n", caminhoes);
    double distancia = (caminhoes*30)/1000;
    printf("Fila em km: %lf\n", distancia);
    double terra = distancia/12756.28;
    printf("Voltas na terra: %lf\n", terra);  
}