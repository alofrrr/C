#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
void vetorInverso(int v[],int v2[], int t,int b){
if(b<20){
v[b]=v2[t];
t--;
b++;
vetorInverso(v,v2,t,b);
}
}
int main()
{
setlocale(LC_ALL,"portuguese");
srand(time(NULL));
int vetor[20],vetor2[20], i;
for(i=0; i<20; i++){
vetor[i] = rand()%100;
vetor2[i] = vetor[i];
}
printf("Vetor:\n");
for(i=0; i<20; i++){
printf("%d ", vetor[i]);
}
vetorInverso(vetor, vetor2, 19, 0);
printf("\n\nVetor Invertido:\n");
for(i=0; i<20; i++){
printf("%d ", vetor[i]);
}
return 0;
}