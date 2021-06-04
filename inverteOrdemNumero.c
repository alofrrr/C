#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int invertendo(int v){
int unidade=0, dezena=0, centena=0;
centena = v / 100;
dezena = (v - (centena * 100)) / 10;
unidade = v - ((centena * 100) + (dezena * 10));
v = (unidade*100) + (dezena*10) + centena;
return v;
}
int main()
{
setlocale(LC_ALL, "Portuguese");
int valor, i;
printf("\t~~~~Invertendo números~~~~\n");
do {
printf("Digite um número inteiro de 100 à 999: ");
scanf("%d",&valor);
}while ((valor >= 1000) || (valor <= 99));
i = invertendo(valor);
printf("Ordem invertida: %d", i);
return 0;
}