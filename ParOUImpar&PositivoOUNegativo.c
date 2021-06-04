#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
setlocale(LC_ALL, "Portuguese");
int num;
printf("digite um numero inteiro: ");
scanf("%d",&num);
if(num%2==0)
{
printf("O número é par\n");
}
else
{
printf("O número é ímpar\n");
}
if(num >= 0)
{
printf("O número é positivo\n");
}
else
{
printf("O número é negativo\n");
}
return 0;
}