#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
void
vetorInverso (int v[
] 
, int v2[
] 
, int t, int b)
{
  
if (b < 10)
    {
      
v[b] = v2[t];
      
t--;
      
b++;
      
vetorInverso (v, v2, t, b);
    
}

}


int
main (
) 
{
  
setlocale (LC_ALL, "portuguese");
  
srand (time (NULL) 
);
  
int vetor[10] 
, vetor2[10] 
, i;
  
for (i = 0; i < 10; i++)
    {
      
vetor[i] = rand (
) % 100;
      
vetor2[i] = vetor[i];
    
}
  
for (i = 0; i < 10; i++)
    {
      
printf ("%d ", vetor[i] 
);
    
}
  
vetorInverso (vetor, vetor2, 9, 0);
  
printf ("\nvetor invertido\n");
  
for (i = 0; i < 10; i++)
    {
      
printf ("%d ", vetor[i] 
);
    
}
  
return 0;

}
