#include <stdio.h>
#include <math.h>

int main() {
    int x, y, z;
    int maiorXY, maior;

    // entrada
    printf("Digite X, Y e Z: ");
    scanf("%d %d %d", &x, &y, &z);

    // maior entre X e Y
    maiorXY = (x + y + abs(x - y)) / 2;

    // maior entre (maiorXY) e Z
    maior = (maiorXY + z + abs(maiorXY - z)) / 2;

    // saída
    printf("Maior Numero: %d\n", maior);

    return 0;
}