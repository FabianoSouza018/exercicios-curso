#include <stdio.h>

int main() {

    int num_Inicial, num_Final;

    printf("Digite Numero inicial.: ");
    scanf(" %d", &num_Inicial);

    printf("Digite Numero Final.: ");
    scanf(" %d", &num_Final);

    int i = num_Inicial;

    while (i <= num_Final)
    {
        printf("%d", i);

        /*imprime a ","*/
        if (i < num_Final) {
            printf(", ");
        }

        /* numero inicial somando com "+1" 
        Ex: 3 + 1 = 4 + 1 = 5...numero final*/
        i++;
    }
    
    return 0;
}