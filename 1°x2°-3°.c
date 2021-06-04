#include <stdio.h>
#include <stdlib.h>
int main()
{
int n1, n2, n3, total;
printf("Forneça o primeiro número:");
scanf("%d", &n1);
printf("Forneça o segundo número:");
scanf("%d", &n2);
printf("Forneça o terceiro número:");
scanf("%d", &n3);
total = (n1 * n2) - n3;
printf("O resultado é: %d", total);
return 0;
}

