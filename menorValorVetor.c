#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
int
menorValor (int v[20] 
, int tam, int m)
{
  
if (tam == 0)
    {
      
return m;
    
}
  
if (v[tam] < m)
    {
      
m = v[tam];
    
}
  
return menorValor (v, tam - 1, m);

}


int
main (
) 
{
  
setlocale (LC_ALL, "portuguese");
  
srand (time (NULL) 
);
  
int vetor[20] 
, i;
  
for (i = 0; i < 20; i++)
    {
      
vetor[i] = rand (
) % 100;
    
}
  
for (i = 0; i < 20; i++)
    {
      
printf ("%d ", vetor[i] 
);
    
}
  
printf ("\nO menor valor do vetor C): %d",
	   menorValor (vetor, 19, vetor[19] 
) 
);
  
return 0;

}
