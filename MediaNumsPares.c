#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
setlocale(LC_ALL, "Portuguese");
int num1,num2,num3,num4;
float soma=0,total=0,media;
printf("\t\t\tCálculo da média dos números pares\n\n\n");
printf("Informe o 1º número:");
scanf("%d",&num1);
printf("Informe o 2º número:");
scanf("%d",&num2);
printf("Informe o 3º número:");
scanf("%d",&num3);
printf("Informe o 4º número:");
scanf("%d",&num4);
if(num1 % 2 == 0) {
soma = soma + num1;
total = total + 1;
}
if(num2 % 2 == 0) {
soma = soma + num2;
total = total + 1;
}
if(num3 % 2 == 0) {
soma = soma + num3;
total = total + 1;
}
if(num4 % 2 == 0) {
soma = soma + num4;
total = total + 1;
}
media = soma / total;
if (total == 0) {
printf("Não foram informados números pares!");
} else {
printf("\nA média é: %.2f", media);
}
return 0;
}