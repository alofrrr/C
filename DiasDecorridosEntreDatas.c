#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
typedef struct{
int dia;
int mes;
int ano;
}data1;
typedef struct{
int dia;
int mes;
int ano;
}data2;
int calculoDias(data1 d1, data2 d2){
int dnm[13]={0, 31, 28, 31, 30, 31, 30, 31, 30, 31, 30, 31};
float dini=0,dfin=0,total=0;
int i=0;
if ((d1.mes < 1 ||d1.mes > 12)||(d2.mes < 1 || d2.mes > 12)){
printf("\nMês informado inválido.");
}else if((d1.dia < 1 || d1.dia > 31)||(d2.dia < 1 || d2.dia > 31)){
printf("\nDia informado inválido.");
}else if((d1.ano < 0 )||(d2.ano < 0)){
printf("\nAno informado inválido.");
}else if(
(d1.mes == 4, 6, 9, 11) && (d1.dia > 30) || (d2.mes == 4, 6, 9, 11) && (d2.dia > 30)){
printf("\nDia informado inválido.");
}else if(
(d1.ano%4!=0 && d1.mes==2 && d1.dia>28) ||(d2.ano%4!=0 && d2.mes==2 && d2.dia>28)){
printf("\nDia informado inválido.");
}else{
dini = d1.ano * 365.25;
for(i=1; i <= d1.mes; i++){
dini = dini + dnm[i];
}
dini =dini + d1.dia;
if(d1.mes >= 2 && d1.ano % 4 == 0){
dini = dini + 1;
}
if (d2.mes >= 1 || d2.mes <= 12){
dfin = d2.ano * 365.25;
}
for(i=1; i <= d2.mes; i++){
dfin = dfin + dnm[i];
}
dfin = dfin + d2.dia;
if(d2.mes >=2 && d2.ano % 4 == 0){
dfin = dfin +1;
}
total = dfin - dini;}
return total;
}
int main(
)
{
setlocale(LC_ALL, "portuguese");
data1 data1;
data2 data2;
float total;
printf("Calculadora de dias\n\nData inicial:\n\n");
printf("Informe o dia: ");
scanf("%d", &data1.dia);
printf("Informe o mês: ");
scanf("%d", &data1.mes);
printf("Informe o ano: ");
scanf("%d", &data1.ano);
printf("\nData Final:\n\nInforme o dia: ");
scanf("%d", &data2.dia);
printf("Informe o mês: ");
scanf("%d", &data2.mes);
printf("Informe o ano: ");
scanf("%d", &data2.ano);
printf("\nData Inicial: %d/%d/%d", data1.dia, data1.mes, data1.ano);
printf("\nData Final: %d/%d/%d\n", data2.dia, data2.mes, data2.ano);
total = calculoDias(data1, data2);
printf("\nTotal de dias decorridos: %.0f", total);
return 0;
}