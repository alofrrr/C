#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
int main() {
setlocale(LC_ALL, "Portuguese") ;
int t, i, j=0;
char s[100], chAtual, chNovo;
printf("Digite uma frase: ") ;
gets(s) ;
printf("Digite o caracter a ser substituido: ") ;
scanf("%c", &chAtual) ;
printf("Digite o novo caracter: ") ;
scanf(" %c", &chNovo) ;
t=strlen(s) ;
for(i=0; i<t; i++)
{
if(s[i]==chAtual)
{
s[i]=chNovo;
j++ ; }
}
printf("Sua frase: %s", s) ;
printf("\nNúmero de substituições: %d", j) ;
return 0;
}