#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
setlocale(LC_ALL, "Portuguese");
int v[10], n, c=0;
for(n=0; n<10; n++){
printf("Informe um número:");
scanf("%d", &v[n]);
}
for(n=0; n<10; n++){
if (v[n] % 2 == 0)
c+=1;
}
printf("Valores pares informados: %d", c);
return 0;
}