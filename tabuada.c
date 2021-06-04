#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
setlocale(LC_ALL, "Portuguese");
int n, num;
printf("Informe um número:");
scanf("%d", &num);
printf("\n\t\t*** Tabuada do %d ***", num);
for(n=1; n<=10; n++){
printf("\n%d X %d = %d", num, n, num*n);
}
return 0;
}