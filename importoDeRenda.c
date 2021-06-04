#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
setlocale(LC_ALL, "Portuguese");
char cpf[14];
float rendaAnual, rendaLiquida, dependentes, imposto;
printf("Informe somente os números de seu CPF: ");
scanf("%s", &cpf);
printf("\nInforme o número de dependentes: ");
scanf("%f", &dependentes);
printf("\nInforme sua renda anual: ");
scanf("%f", &rendaAnual);
rendaLiquida = rendaAnual-(dependentes * 1.500);
if(rendaLiquida<=28.000){
printf("\n\nContribuinte: %s", cpf);
printf("\nRenda Líquida: %.3f", rendaLiquida);
printf("\nValor do imposto: Isento");
}
if((rendaLiquida>28.000) && (rendaLiquida<=40.000)){
printf("\n\nContribuinte: %s", cpf);
printf("\nRenda Líquida: %.3f", rendaLiquida);
imposto = (rendaLiquida / 100) * 10;
printf("\nValor do imposto: %.3f", imposto);
}
if((rendaLiquida>40.000) && (rendaLiquida<=50.000)){
printf("\n\nContribuinte: %s", cpf);
printf("\nRenda Líquida: %.3f", rendaLiquida);
imposto = (rendaLiquida / 100) * 15;
printf("\nValor do imposto: %.3f", imposto);
}
if(rendaLiquida>50.000){
printf("\n\nContribuinte: %s", cpf);
printf("\nRenda Líquida: %.3f", rendaLiquida);
imposto = ((rendaLiquida / 100) * 27) + (rendaLiquida / 200);
printf("\nValor do imposto: %.3f", imposto);
}
return 0;
}