#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
typedef struct {
int t1;
int t2;
int t3;
int t4;
}tentativa;
void cor (int i)
{
if (i == 0){
system("color f0");
}
if (i == 1){
system("color f1");
}
if (i == 2){
system("color f2");
}
if (i == 3){
system("color f4");
}
if (i == 4){
system("color f5");
}
if (i == 5){
system("color f6");
}
if (i == 6){
system("color fd");
}
if (i == 7){
system("color f9");
}
if (i == 8){
system("color f8");
}
if (i == 9){
system("color fc");
}
}
int informanivel(int nivel){
if(nivel==1){
nivel = 10;
}
else if(nivel==2){
nivel = 6;
}
else if(nivel==3){
nivel = 3;
}
return nivel;
}
int pontos (int v[], int w[], tentativa n[], int i)
{
int a=0;
if(v[0] == n[i].t1){
w[0] = 1;
a = a + w[0];
}else if(v[1] == n[i].t1 || v[2] == n[i].t1 || v[3] == n[i].t1){
w[0] = 0;
a = a + w[0];
}else{
w[0] = -1;
a = a + w[0];
}
if(v[1] == n[i].t2){
w[1] = 1;
a = a + w[1];
}else if(v[0] == n[i].t2 || v[2] == n[i].t2 || v[3] == n[i].t2){
w[1] = 0;
a = a + w[1];
}else{
w[1] = -1;
a = a + w[1];
}
if(v[2] == n[i].t3){
w[2] = 1;
a = a + w[2];
}else if(v[0] == n[i].t3 || v[1] == n[i].t3 || v[3] == n[i].t3){
w[2] = 0;
a = a + w[2];
}else{
w[2] = -1;
a = a + w[2];
}
if(v[3] == n[i].t4){
w[3] = 1;
a = a + w[3];
}else if(v[0] == n[i].t4 || v[1] == n[i].t4 || v[2] == n[i].t4){
w[3] = 0;
a = a + w[3];
}else{
w[3] = -1;
a = a + w[3];
}
printf("\nSua tentativa: %i %i %i %i\n", n[i].t1,n[i].t2,n[i].t3,n[i].t4);
printf("Resultado: %i %i %i %i\n\n", w[0],w[1],w[2],w[3]);
i = acertououerrou(a,i);
return i;
}
int acertououerrou (int a, int i){
if (a==4){
printf("\n\n*****YOU WIN!*****\n\n");
printf("Acertou na %i tentativa!\n", i+1);
printf("Press enter para encerrar!\n\n\n\n\n");
i=120;
return i;
}else return i;
}
int confere (int v[], int w[],tentativa n[],int i)
{
int c=0;
if ((n[i].t1 > 9) || (n[i].t1 < 0))
c++;
if ((n[i].t2 > 9) || (n[i].t2 < 0))
c++;
if ((n[i].t3 > 9) || (n[i].t3 < 0))
c++;
if ((n[i].t4 > 9) || (n[i].t4 < 0))
c++;
if (c>0){
printf("\nDigite somente números 0 a 9!\n"
"Repita sua tentativa!\n");
i--;
return i;
}else{
i=pontos(v,w,n,i);
return i;
}
}
int main()
{
setlocale(LC_ALL, "portuguese");
srand(time(NULL));
int i,v[4],w[4],x, nivel;
tentativa n[10];
for(i=0; i<4; i++)
{
v[i] = rand()%10;
}
printf("\n\tO jogo está prestes a começar!\n"
"\npress enter...\n");
getchar();
system("cls");
system("color f6");
printf("\t\t****** JOGO DA SENHA *******\n\n""Você deverá acertar a combinação gerada!\n""\nPara isso deverá ser escolhido o nível, que disponibilizará um número menor de\n" "tentativas conforme a dificuldade.");
getchar();
system("color fa");
printf("\n* Deverão ser inseridos números entre 0 e 9 a cada tentativa.\n");
getchar();
system("color fd");
printf("* A cada tentativa serão dadas as seguintes informações: \n"
" -1 para cada valor que não fizer parte da senha. \n 0 para cada valor correto e na posição errada." "\n 1 para cada valor correto e na posição correta.\n");
getchar();
system("color f8");
printf("Níveis a escolha do jogador e suas respectivas tentavivas:\n"
"\nFácil: 10 tentativas\nMédio: 6 tentativas\nDifícil: 3 tentativas\n");
getchar();
system("color f5");
printf("\Fácil: 1\n"
"Médio: 2\n"
"Difícil: 3\n");
printf("Informe o nível escolhido: ");
scanf("%d", &nivel);
while(nivel<=0 || nivel > 3){
printf("Somente números entre 1 e 3.");
printf("\nInforme o nível novamente: ");
scanf("%d", &nivel);
}
printf("\n");
for (i=0; i<informanivel(nivel); i++){
cor (i);
printf("Digite sua %i tentativa:\n\n",i+1);
printf("Informe o 1° número: ");
scanf("%d", &n[i].t1);
printf("Informe o 2° número: ");
scanf("%d", &n[i].t2);
printf("Informe o 3° número: ");
scanf("%d", &n[i].t3);
printf("Informe o 4° número: ");
scanf("%d", &n[i].t4);
i = confere(v,w,n,i);
}
if (i==informanivel(nivel)){
printf("\nA senha criada foi %i %i %i %i\n"
"Que pena! Você perdeu o jogo! Mas não deixe de jogar novamente!!!!!!!!!\n\n\n", v[0], v[1], v[2
], v[3]);
}
return 0;
}