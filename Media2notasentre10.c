#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main(){

setlocale(LC_ALL, "portuguese");
float n1, n2, media;
printf("Informe a primeira nota: ");

scanf("%f", &n1);

printf("Informe a segunda nota: ");

scanf("%f", &n2);
if (n1<=10 && n2<=10 && n1>=0 && n2>=0){
  media = (n1 + n2)/ 2; 

printf ("\n A media é: \n %.2f", media);} 

else
    printf ("Nota informada não é válida");

return 0;

}