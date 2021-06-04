#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main ()
{
setlocale (LC_ALL, "portuguese");
int num, x;
int somaAntecessores (int num);
printf ("\t\tCalculadora de Antecessores\n");
printf ("\nInforme um número inteiro e positivo: ");
scanf ("%d", &num);
x = somaAntecessores (num);
printf ("Soma dos antecessores de %d: %d\n", num, x);
return 0;
}
int somaAntecessores (int num)
{
int i, x = 0;
for (i = num; i > 0; i--)
{
x = x + i;
}
return x;
}