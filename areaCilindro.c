#include <stdio.h>
#include <stdlib.h>
int main()
{
float raio, altura, area;
printf("Forneça o raio (em metros):");
scanf("%f", &raio);
printf("Forneça a altura (em metros):");
scanf("%f", &altura);
area = 2 * 3.14 * raio * (raio + altura);
printf("A área do cilindro é: %.2f", area);
return 0;
}
