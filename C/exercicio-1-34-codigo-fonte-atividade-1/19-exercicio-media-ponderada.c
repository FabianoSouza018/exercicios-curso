#include <stdio.h>
#include <math.h>

int main() {

    float n1, n2, n3;
    float media;

    // entrada
    printf("Nota 1: ");
    scanf("%f", &n1);

    printf("Nota 2: ");
    scanf("%f", &n2);

    printf("Nota 3: ");
    scanf("%f", &n3);

    // processamento
    media = (n1*2 + n2*3 + n3*4) / 9;

    // arredondamento
    media = round(media);

    // saída
    printf("Media: %.1f\n", media);

    return 0;
}