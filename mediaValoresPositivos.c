#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
setlocale(LC_ALL, "Portuguese");
int i=0;
float soma=0,n;
do {
printf("\t\t Ao digitar um valor negativo o programa encerrará\n\n");
printf("Digite um valor:");
scanf("%f",&n);
soma=soma+n;
i++;
}
while (n>=0);
if (i==1)
{
printf("valor lido invalido");
printf("media = 0");
}
else
{
i--;
soma=soma-n;
printf("foram lidos %d valores\n",i);
printf("A média dos valores é: %.2f",soma/i);
}
return 0;
}