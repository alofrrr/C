#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
int main(){
setlocale(LC_ALL, "portuguese");
srand(time(NULL));
int vetor1[10], vetor2[10], i=0, j=0;
for(i=0; i<10; i++){
vetor1[i] = rand()%1000;
vetor2[i] = rand()%1000;
}
for(i=0; i<10; i++){
printf("%d ", vetor1[i]);
}
printf("\n");
for(i=0; i<10; i++){
printf("%d ", vetor2[i]);
}
for(i=0; i<10; i++){
if (vetor1[1]==vetor2[i]){
j++;
}
if (vetor1[2]==vetor2[i]){
j++;
}
if (vetor1[3]==vetor2[i]){
j++;
}
if (vetor1[4]==vetor2[i]){
j++;
}
if (vetor1[5]==vetor2[i]){
j++;
}
if (vetor1[6]==vetor2[i]){
j++;
}
if (vetor1[7]==vetor2[i]){
j++;
}
if (vetor1[8]==vetor2[i]){
j++;
}
if (vetor1[9]==vetor2[i]){
j++;
}
if (vetor1[0]==vetor2[i]){
j++;
}
}
if(j>10){
printf("\n\nHá permutação entre os vetores!\n");
}else{
printf("\n\nNão há permutação entre os vetores!\n");
}
return 0;
}