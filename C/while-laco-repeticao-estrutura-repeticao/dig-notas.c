#include <stdio.h>

int main() {
   int nota;

   printf("nota: ");
   scanf("%d", &nota);

   while (nota >= 0) {

      printf("nota: ");
      scanf("%d", &nota);
   }
}
