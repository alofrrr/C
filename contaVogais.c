#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
int contarvogais(char frase[]){
int letras, i, cont=0;
letras = strlen(frase);
for(i=0; i<=letras; i++){
    if(frase[i] == 'a'||frase[i] == 'e'||frase[i] == 'i'||frase[i] == 'o'||frase[i] == 'u'){
cont++;
}
}
for(i=0; i<=letras; i++){
if(frase[i] == 'A'||frase[i] == 'E'||frase[i] == 'I'||frase[i] == 'O'||frase[i] == 'U'){
cont++;
}
}
return cont;
}
int main(
)
{
setlocale(LC_ALL,"portuguese");
char frase[100];
int cont;
printf("Digite uma frase: ");
gets(frase);
printf("Número de vogais da frase: %d", contarvogais(frase)
);
return 0;
}