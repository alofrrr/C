#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
setlocale(LC_ALL, "Portuguese");
float salario, financiamento;
printf("Informe o salário:\n");
scanf("%f", &salario);
printf("Informe o financiamento desejado:\n");
scanf("%f", &financiamento);
salario = salario * 5;
if (financiamento <= salario){
printf("Financiamento Concedido");
}
else{
printf("Financiamento Negado");
}
return 0;
}