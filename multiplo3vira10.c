#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
setlocale(LC_ALL, "Portuguese");
int num[70], n;
for (n=0; n<70; n++)
if (n % 3 == 0)
num[n] = 10;
else
num[n] = n * 10;
for(n=0; n<70; n++){
printf("%d\n", num[n]);
}
return 0;
}