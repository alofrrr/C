#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int fatorial (int v1[
]
,int v2[
]
)
{
int i, r;
for (r=0;r<10;r++){
v2[r] = 1;
for (i=v1[r];i>0; i--){
v2[r] = v2[r] * i;
}}
return v2;
}
int main (
)
{
setlocale (LC_ALL, "portuguese");
srand(time(NULL)
);
int v1[10]
,v2[10]
, i;
printf("Vetor:\n");
for(i=0; i<10; i++){
v1[i] = (rand(
)%6)+1;}
for(i=0; i<10; i++){
printf("%d ", v1[i]
);
}
fatorial (v1,v2);
printf("\nFatorial do vetor:\n");
for(i=0; i<10; i++){
printf("%d ", v2[i]
);
}
return 0;
}