#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
int main()
{
setlocale(LC_ALL, " ");
char str[25] ;
int t, i;
printf("Insira uma palavra: ");
gets (str);
t=strlen(str);
printf("Palavra invertida: ");
for(i=t-1;i>=0;i--)
{
printf("%c",str[i]
);
}
return 0;
}