#include <stdio.h>

int main()
{
    int lgcomum=2345, lgadit=765;    
    float Pgcom=3.39, Pgadit=3.49, Tcomum, Tadit, Total;

    Tcomum = Pgcom * lgcomum;
    Tadit  = Pgadit * lgadit;
    Total = Tcomum + Tadit;

    printf("Total Gas. comum = %.2f\n", Tcomum);
    printf("Total Gas. aditivada = %.2f\n", Tadit);
    printf("Total vendido = %.2f\n", Total);

    return 0;
}