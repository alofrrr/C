#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    char cifra[1000], c;
    int i, tam, j;

    printf("\t\t>>>> Criptografia em Codigo de César <<<<\n\n");
    printf("Para criptografar pressione 1\n");
    printf("Para descriptografar pressione 2\n");
    printf("Você deseja: ");
    scanf("%d", &j);
    fflush(stdin);
    if(j == 1){
    printf("\nInsira uma frase: ");
    gets(cifra);

    tam = strlen(cifra);

     for (i=0;i<tam;i++){
         for (c=65;c<91;c++){
        if ((cifra[i] == c) && (cifra[i] < 88)){
            cifra[i] = c+3;
            c = 91;
        }
        if ((cifra[i] == c) && (cifra[i] > 87)){
            cifra[i] = c-23;
            c = 91;
        }}
        for (c=97;c<123;c++){
        if ((cifra[i] == c) && (cifra[i] > 119)){
            cifra[i] = c-23;
            c = 123;
            }
        if ((cifra[i] == c) && (cifra[i] < 120)){
            cifra[i] = c+3;
            c=123;
        }}}
        printf("\nFrase criptografada: %s", cifra);
    }
    if(j == 2){
    printf("\nInsira a criptografia: ");
    gets(cifra);

    tam = strlen(cifra);

     for (i=0;i<tam;i++){
         for (c=65;c<91;c++){
        if ((cifra[i] == c) && (cifra[i] > 67)){
            cifra[i] = c-3;
            c = 91;
        }
        if ((cifra[i] == c) && (cifra[i] < 68)){
            cifra[i] = c+23;
            c = 91;
        }}
        for (c=97;c<123;c++){
        if ((cifra[i] == c) && (cifra[i] < 100)){
            cifra[i] = c+23;
            c = 123;
            }
        if ((cifra[i] == c) && (cifra[i] > 99 )){
            cifra[i] = c-3;
            c=123;
        }}}
        printf("\nSua frase: %s", cifra);
    }
    return 0;
}