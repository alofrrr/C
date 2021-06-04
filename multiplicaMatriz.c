#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
setlocale(LC_ALL, "Portuguese");
int m[6][6], i, j, a;
printf ("\nForneça os valores da matriz:\n\n");
for ( i=0; i<6; i++ ){
for ( j=0; j<6; j++ )
{
printf ("\nLinha %d / Coluna %d = ", i+1, j+1);
scanf ("%d", &m[ i ][ j ]);
}}
printf("\nMatriz:\n");
for ( i=0; i<6; i++ ){
for ( j=0; j<6; j++ )
{
printf ("[%d] ", m[i][j]);}
printf("\n");}
printf("\nForneça o valor pelo qual a matriz será multiplicada: ");
scanf("%d", &a);
printf("\nMatriz X %d:\n", a);
for ( i=0; i<6; i++ ){
for ( j=0; j<6; j++ )
{
printf ("[%d] ", m[i][j] * a);}
printf("\n");}
return 0;
}