#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
void matriz(int m[][4],int i,int j,int contacolunas,int contalinhas,int x){
for (j=0;j<4;j++){
x = 0;
for (i=0;i<4;i++){
if (m[i][j] == 0){
x++;
}
if (x==4){
contalinhas++;
}
}
}
for (j=0;j<4;j++){
x = 0;
for (i=0;i<4;i++){
if (m[i][j] == 0){
x++;
}
if (x==4){
contacolunas++;
}}}
printf("\nExistem %i colunas nulas", contacolunas);
printf("\nExistem %i linhas nulas\n", contalinhas);
}
int main()
{
setlocale(LC_ALL, "portuguese");
srand(time(NULL));
int m[4][4],i,j,contacolunas=0,contalinhas=0,x=0;
void matriz(int m[][4],int i,int j,int contacolunas,int contalinhas,int x);
printf("Matriz:\n");
for (i=0;i<4;i++){
for (j=0;j<4;j++){
m[i][j] = rand() % 100;
printf("[%i]", m[i][j]);
}
printf("\n");
}
matriz(m,i,j,contacolunas,contalinhas,x);
return 0;
}