#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
int Somapares(int v[], int tam,int soma){
if (tam < 30){
if(v[tam] % 2 == 0){
soma = soma + v[tam];
}
tam++;
Somapares(v, tam, soma);
} else{
return soma;
}
}
int main()
{
setlocale(LC_ALL,"portuguese");
srand(time(NULL));
int vetor[30], i, total, j=0, k=0;
for(i=0; i<30; i++){
vetor[i]= rand() % 11;
}
for(i=0; i<30; i++){
printf("%d ", vetor[i]);
}
total = Somapares(vetor, j, k);
printf("\nA soma dos números pares é: %d ", total);
return 0;
}