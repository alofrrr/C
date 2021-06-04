#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
setlocale(LC_ALL, "Portuguese");
int m[4][4], i, j, maior=0;
printf ("\nForneça os valores da matriz:\n\n");
for ( i=0; i<4; i++ ){
for ( j=0; j<4; j++ )
{
printf ("\nLinha %d / Coluna %d = ", i+1, j+1);
scanf ("%d", &m[ i ][ j ]);
}}
printf("\nMatriz:\n");
for ( i=0; i<4; i++ ){
for ( j=0; j<4; j++ )
{
printf ("[%d] ", m[i][j]);
}
printf("\n");
}
for ( i=0; i<4; i++ ){
for ( j=0; j<4; j++ )
{
if (m[i][j]>10){
maior++;
}}}
printf("\nNúmeros maiores que 10: %d", maior);
return 0;
}