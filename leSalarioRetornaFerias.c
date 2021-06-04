#include <stdio.h>
#include <stdlib.h>
int main()
{
float salario, ferias;
printf("Informe o seu salário: ");
scanf("%f", &salario);
ferias = salario * 1.33;
printf("Valor das férias: %.2f", ferias);
return 0;
}