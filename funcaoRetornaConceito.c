#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
setlocale(LC_ALL, "Portuguese");
char conceito;
float nota;
int mediafinal(float nota);
printf("\t\tDescubra seu conceito\n");
printf("\nForneça uma nota de 0 à 10: ");
scanf("%f", &nota);
conceito = mediafinal(nota);
printf("\nConceito: %c\n", conceito);
return 0;
}
int mediafinal(float nota){
char conceito;
if((nota >= 9) && (nota <= 10))
conceito = 'A';
if((nota >= 7) && (nota < 9))
conceito = 'B';
if((nota >= 5) && (nota < 7))
conceito = 'C';
if (nota < 5)
conceito = 'D';
return conceito;
}