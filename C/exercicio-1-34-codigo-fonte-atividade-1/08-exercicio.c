#include <stdio.h>

int main()
{
int lcubo, Aface, Atface, Pface, Saresta, volume;
// lcubo = Lado do cubo - 7 - Destacado na questão.
// Aface = Area de uma face - 49 / 7 = 7
// Atface = Area total das faces - 294 / 6 = 49 - Quantas face tem um cubo "6" * 49 = 294
// Pface = Perimetro face - 28 / 7 = 4
// Saresta = Soma de todas aresta - 84 / 7 = 12
// volume = volume - 343 / 7 = 49
printf("Qual lado do cubo\n");
printf("Digite lado do cubo:    "); //7
scanf("%d", &lcubo);

printf("Area total de suas faces\n");
printf("Digite total de faces:  "); //6
scanf("%d", &Atface);

printf("Perimetro de uma das suas faces\n");
printf("Perimetro face: "); //4
scanf("%d", &Pface);

printf("Soma de todas as aresta\n");
printf("Quantas aresta: "); //12
scanf("%d", &Saresta);

Aface = lcubo * lcubo; // 7 * 7 = 49
Atface = Aface * Atface; // 6 * 49 = 294
Pface = lcubo * Pface; // 7 * 4 = 28
Saresta = lcubo * Saresta; // 7 * 12 = 84
volume = Aface * lcubo; // 49 * 7 = 343

printf("Area de uma face = %d\n", Aface);
printf("Area total face = %d\n", Atface);
printf("Perimetro de uma face = %d\n", Pface);
printf("Soma total da aresta = %d\n", Saresta);
printf("Volume = %d\n", volume);

 return 0;
}