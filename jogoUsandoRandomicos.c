#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
setlocale(LC_ALL, "portuguese");
int vet[5], i, v[3], n, g=0, a, ok=1 , nop=0, c=1;
printf("\t\t\t** Jogo de Adivinhação **");
printf("\n Você terá que advinhar 3 dos 5 números presentes em uma sequência aleatória! ");
printf("\t\t\t\tDICA: são números de 1 à 10!");
srand(time(NULL));
for(i=0; i<5; i++){
do{
vet[i] = 1 + (rand()%10);
c=ok;
for(a=0; a < i; a++)
if (vet[i] == vet[a])
c=nop;
} while(c == nop);
}
printf("\n");
for(n=0; n<3; n++){
printf("\nInforme um número: ");
scanf("%d", &v[n]);
}
for(n=0; n<3; n++){
i=0;
for(i=0; i<5; i++){
if (v[n] == vet[i])
g++;
}
}
if(g >= 3)
printf("\n\t\t\tVocê ganhou!\n");
else
printf("\n\t\t\tVocê perdeu!\n");
printf("\nNúmero de acertos:%d\n", g);
printf("\nSequência gerada:\n\n");
for(i=0; i<5; i++){
printf("-> %d ", vet[i]);
}
printf("\n\n\n");
return 0;
}