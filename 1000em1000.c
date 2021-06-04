#include <stdio.h>
#include <stdlib.h>
int main()
{
int i, n;
printf("Para iniciar pressione 0!\n");
scanf("%d", &n);
for(i=1000; i<=100000; i= i+1000)
printf("%d\n", i);
return 0;
    
}