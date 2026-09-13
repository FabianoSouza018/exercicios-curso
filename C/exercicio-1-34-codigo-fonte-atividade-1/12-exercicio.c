#include <stdio.h>
#include <math.h>

int main () 
{
    int X = 7;
    int Y = 11;
    int temp;

    temp = X;
    X = Y;
    Y = temp;

    printf("X = %d, Y = %d", X, Y);

    return 0;
}