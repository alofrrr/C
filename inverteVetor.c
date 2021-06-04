#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
setlocale(LC_ALL, "Portuguese");
int i, v[5];
for(i=0;i<5;i++){
printf("Informe um número:");
scanf("%d",&v[i]);
}
printf("\nNúmeros na ordem inversa:\n");
for(i=4;i>=0;i--)
printf("%d ",v[i]);
return 0;
}