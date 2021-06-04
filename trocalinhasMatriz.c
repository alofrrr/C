#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
setlocale(LC_ALL, "Portuguese");
srand(time(NULL));
int m[10][10], i, j, k;
printf("Matriz:\n");
for (i=0; i<10; i++){
for(j=0; j<10; j++){
m[i][j]= (rand()%101);}}
for (i=0; i<10; i++){
for(j=0; j<10; j++){
if(m[i][j]<10)
printf("[0%d] ", m[i][j]);
if(m[i][j]>=10 && m[i][j]<100)
printf("[%d] ", m[i][j]);
if(m[i][j]>99)
printf("[%d] ", m[i][j]);}
printf("\n");}
printf("Matriz modificada:\n");
for(j=0; j<10; j++){
k = m[1][j];
m[1][j] = m[7][j];
m[7][j] = k;}
for (i=0; i<10; i++){
for(j=0; j<10; j++){
if(m[i][j]<10)
printf("[0%d] ", m[i][j]);
if(m[i][j]>=10 && m[i][j]<100)
printf("[%d] ", m[i][j]);
if(m[i][j]>99)
printf("[%d] ", m[i][j]);}
printf("\n");}
return 0;
}