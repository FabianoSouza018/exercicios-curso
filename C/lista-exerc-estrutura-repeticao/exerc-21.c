#include <stdio.h>

int main() {
    int n, i, qtd_div = 0;

    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        if (n % i == 0) {
            printf("%d ", i);
            qtd_div++;
        }
    }

    printf("\nqtd_div = %d\n", qtd_div);

    if (qtd_div == 2) {
        printf("Primo");
    } else {
        printf("Nao e Primo");
    }

    return 0;
}