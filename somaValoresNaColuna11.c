#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
setlocale(LC_ALL, "Portuguese");
srand(time(NULL));
int m[30][11], i, j;
printf("\t\tMatriz\n");
for(i=0; i<30; i++){
for(j=0; j<11; j++){
m[i][j] = (rand()%10);}}
for(i=0; i<30; i++){
m[i][10] = 0;}
printf("\nSoma dos valores aleatórios da linha na coluna 11:\n\n");
for(i=0; i<30; i++){
m[i][10] = m[i][0] + m[i][1] + m[i][2] + m[i][3] + m[i][4] + m[i][5] + m[i][6]
+ m[i][7] + m[i][8] + m[i][9];}
for(i=0; i<30; i++){
for(j=0; j<11; j++){
printf("[%d]", m[i][j]);}
printf("\n");}
return 0;
}