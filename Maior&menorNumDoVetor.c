#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
setlocale(LC_ALL, "Portuguese");
int vetor[9], i = 1, maior = 0, menor = 0;
printf("Informe dez números:");
scanf("%d",&vetor[0]);
maior = vetor[0];
menor = vetor[0];
int vt = 1;
int vt1 = 1;
for (;i < 10;i++){
scanf("%d",&vetor[i]);
if (vetor[i]> maior){
maior = vetor[i];
vt = i + 1;
}
if (vetor[i]< menor){
menor = vetor[i];
vt1 = i + 1;
}
}
printf("\nO maior é %d", maior);
printf("\nO menor é %d", menor);
return 0;
}