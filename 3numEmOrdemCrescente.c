#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
setlocale(LC_ALL, "Portuguese");
int n1, n2, n3;
printf("Informe o 1º:\n");
scanf("%d", &n1);
printf("Informe o 2º:\n");
scanf("%d", &n2);
printf("Informe o 3º:\n");
scanf("%d", &n3);
if (n1 < n2 && n2 < n3) {
printf ("%d, %d, %d", n1, n2, n3);
}
if (n1 < n3 && n3 < n2){
printf("%d, %d, %d", n1,n3,n2);
}
if (n2<n1 && n1<n3){
printf("%d,%d,%d", n2,n1,n3);
}
if (n2<n3 && n3<n1){
printf("%d,%d,%d", n2,n3,n1);
}
if (n3<n1 && n1<n2){
printf("%d,%d,%d", n3,n1,n2);
}
if (n3<n2 && n2<n1){
printf("%d,%d,%d", n3,n2,n1);
}
return 0;
}