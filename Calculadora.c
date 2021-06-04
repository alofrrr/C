#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
setlocale(LC_ALL, "Portuguese");
float n1, n2;
char oper;
printf("\t\t\tCalculadora\n\n");
printf("\t\t\tMenu\n");
printf("\t\t\tPara soma: +\n");
printf("\t\t\tPara subtração: -\n");
printf("\t\t\tPara multiplição: *\n");
printf("\t\t\tPara divisão: /\n");
printf("\nEscolha o operador:");
scanf("%c", &oper);
switch( oper ){
case '+':
printf("Digite o primeiro número:");
scanf("%f", &n1);
printf("Digite o segundo número:");
scanf("%f", &n2);
printf("Resultado: %.2f\n\n", n1 + n2);
break;
case '-':
printf("Digite o primeiro número:");
scanf("%f", &n1);
printf("Digite o segundo número:");
scanf("%f", &n2);
printf("Resultado: %.2f\n\n", n1 - n2);
break;
case '*':
printf("Digite o primeiro número:");
scanf("%f", &n1);
printf("Digite o segundo número:");
scanf("%f", &n2);
printf("Resultado: %.2f\n\n", n1 * n2);
break;
case '/':
printf("Digite o primeiro número:");
scanf("%f", &n1);
printf("Digite o segundo número:");
scanf("%f", &n2);
if(n2 != 0)
printf("Resultado: %.2f\n\n", n1 / n2);
else
printf("Não existe divisão por 0\n\n");
break;
default:
if(oper != 0)
printf(" Operador inválido\n\n ");
}
return 0;
}