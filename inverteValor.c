#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
void trocavalor(int c,int d,int *a,int *b)
{
*a = d;
*b = c;
}
int main(){
setlocale(LC_ALL, "Portuguese");
int e, f, i, g;
printf("Informe o 1º número: ");
scanf("%d", &e);
printf("Informe o 2º número: ");
scanf("%d", &f);
printf("\n\nValores antes de serem invertidos:\n1º: %d\n2º: %d\n", e, f);
trocavalor(e, f, &g, &i);
printf("Valores depois de serem invertidos:\n1º: %d\n2º: %d\n", g, i);
return 0;
}