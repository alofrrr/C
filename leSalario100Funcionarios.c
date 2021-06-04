#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
setlocale(LC_ALL, "portuguese");
int i,q;
float s, soma, t;
q = soma = t = 0;
for (i=1; i<=100; i++)
{
printf("Informe o salário do %iº funcionário:",i);
scanf("%f",&s);
if (s>2000)
{
q++;
soma += s;
}
if (s<2000)
t += s*0.075;
}
printf("Existem na empresa %i funcionários que recebem acima de R$2.000,00!\n",q);
printf("A empresa gasta com funcionários que recebem acima de R$2.000,00 o total de R$%.2f!\n",soma);
printf("Se os funcionário que recebem menos que R$2.000,00 recebessem um aumento de 7,5%%,\n o gasto total seria de R$%.2f!",t);
return 0;
}