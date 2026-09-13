#include <stdio.h>

int main() {
    int ini, fim, i;

    scanf("%d", &ini);
    scanf("%d", &fim);

    for (i = ini; i <= fim; i++) {
        if (i % 7 == 0) {
            printf("%d ", i);
        }
    }

    return 0;
}