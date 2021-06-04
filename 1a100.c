#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
setlocale(LC_ALL, "Portuguese");
int num[100], i;
for(i=0; i<100; i++){
num[i] = i+1;
}
for(i=0; i<100; i++){
printf("%d \n\n", num[i]);
}
return 0;
}