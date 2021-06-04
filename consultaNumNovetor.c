#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
setlocale(LC_ALL, "Portuguese");
int n, vetor[20], n1, c;
for(n=0; n<20; n++){
printf("Informe um número: ");
scanf("%d", &vetor[n]);
}
printf("\n\n\nInforme o número ao qual deseja consultar:");
scanf("%d", &n1);
for(n=0; n<20; n++){
if(n1==vetor[n])
c=1;
}
if(c==1)
printf("O número está presente no conjunto acima!");
else
printf("O número não está presente no conjunto acima!");
printf("\nNúmeros presentes no vetor:");
for(n=0; n<20; n++){
printf("\n%d", vetor[n]);
}
return 0;
}