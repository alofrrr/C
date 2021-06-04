#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
setlocale(LC_ALL, "Portuguese");
float parte2;
int parte1;
int separando(float nota);
printf("\tSeparando números inteiros da parte fracionaaal\n");
printf("\nForneça um número real: ");
scanf("%f", &parte2);
parte1 = separando(parte2);
return 0;
}
int separando(float parte2){
int parte1;
parte1 = parte2;
parte2 = parte2 - parte1;
printf("\nParte inteira: %d\nParte fracional: %.3f\n", parte1, parte2);
return 0;
}