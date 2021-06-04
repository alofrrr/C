#include <stdio.h>
#include <stdlib.h>
#include<locale.h>
int main()
{
setlocale(LC_ALL, "Portuguese");
float smin, receber, hora, horaextra;
smin = 1045;
printf("Informe as horas trabalhadas:");
scanf("%f", &hora);
printf("informe as horas extras trabalhadas:");
scanf("%f", &horaextra);
hora = hora * 130.63;
horaextra = horaextra * 261.25;
receber = hora + horaextra;
printf("O salário a receber será de: %.2f", receber);
return 0;
}