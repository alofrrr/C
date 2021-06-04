#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
setlocale(LC_ALL, "Portuguese");
srand(time(NULL));
int v[30], i;
for(i=0; i< 30; i++){
v[i] =(1 + (rand()%32)) * 3;}
printf("Vetor gerado:\n\n");
for(i=0; i<30; i++) {
printf("%d° -> %d\n",i+1, v[i]);
}
return 0;
}