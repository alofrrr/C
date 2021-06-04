#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
setlocale(LC_ALL, "Portuguese");
int m[4][4], i, j, maior, pi, pj;
printf ("\nForneça os valores da matriz:\n\n");
for ( i=0; i<4; i++ ){
for ( j=0; j<4; j++ )
{
printf ("\nLinha %d / Coluna %d = ", i+1, j+1);
scanf ("%d", &m[ i ][ j ]);
}
}
printf("\nMatriz:\n");
for ( i=0; i<4; i++ ){
for ( j=0; j<4; j++ )
{
printf ("[%d] ", m[i][j]);
}
printf("\n");
}
for(i=0;i<4;i++){
for(j=0;j<4;j++){
if(j==0 && i==0){
maior=m[i][j];
pi=i;
pj=j;}
if(maior < m[i][j]){
maior=m[i][j];
pi=i;
pj=j;}
}}
printf("\nLocalização do maior valor: Linha %d, coluna %d\n", pi+1, pj+1);
return 0;
}