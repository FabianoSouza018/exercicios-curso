#include <stdio.h>

int main() {
    int N, i = 1;
    float S = 0;

    scanf("%d", &N);

    while (i <= N) {
        if (i % 2 == 0) {
            S = S - (float)N / i;
        } else {
            S = S + (float)N / i;
        }

        i++;
    }

    printf("%.10f\n", S);

    return 0;
}