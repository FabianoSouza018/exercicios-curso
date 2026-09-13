#include <stdio.h>
#include <math.h>

int main() {

    float x1, y1, x2, y2, dist;

    // entrada
    printf("X1: ");
    scanf("%f", &x1);

    printf("Y1: ");
    scanf("%f", &y1);

    printf("X2: ");
    scanf("%f", &x2);

    printf("Y2: ");
    scanf("%f", &y2);

    // processamento
    dist = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2)); //"sqrt - raiz quadrada" "pow - potencia"

    // saída
    printf("A distancia entre os pontos (%.0f,%.0f) e (%.0f,%.0f) é %.2f\n",
           x1, y1, x2, y2, dist);

    return 0;
}