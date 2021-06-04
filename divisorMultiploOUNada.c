#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main() {
setlocale(LC_ALL, "Portuguese");
int a, b;
printf("Informe A:");
scanf("%d", &a);
printf("Informe B:");
scanf("%d", &b);
if (a % b == 0){
printf("%d é múltiplo de %d\n", a, b);
}
else if (b % a == 0){
printf("%d é divisor de %d\n", a, b);
}
else {
printf("%d não é nada de %d\n", a, b);
}
return 0;
}