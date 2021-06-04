#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main ()
{
setlocale (LC_ALL, "portuguese");
int num, x;
int fatorial (int num);
printf ("\t\tCalculadora de Fatoriais\n");
printf ("Entre com um um nC:mero:");
scanf ("%d", &num);
x = fatorial (num);
printf ("Fatorial de %d: %d", num, x);
return 0;
}
int fatorial (int num)
{
int i, x = 1;
for (i = num; i > 0; i--)
{
x = x * i;
}
return x;
}