#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int contaLetras (char frase1[], char letra1){
  int i, contador = 0;
  
for (i = 0; frase1[i] != '\0'; i++)
    {
      if (frase1[i] == letra1)
	contador++;
    }
  
return contador;
}


int main (){
  setlocale (LC_ALL, "portuguese");
  char frase[50], letra;
  
printf ("Digite uma frase de atC) 50 caracteres: ");
  gets (frase);
  fflush (stdin);
  printf ("Informe um caractere que deseja encontrar na frase: ");
  scanf ("%c", &letra);
  
 
 
printf ("\nNa frase, existem %d letras %c", contaLetras (frase, letra),letra);
  
return 0;
}
