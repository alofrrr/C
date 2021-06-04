
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
  
void multiplicamatriz (int j[5][5]){
  int d, f, k;
  
for (d = 0; d < 5; d++)
    {
      k = j[d][0];
      for (f = 0; f < 5; f++)
	{
	  j[d][f] = j[d][f] * k;
	}
    }
  for (d = 0; d < 5; d++)
    {
      for (f = 0; f < 5; f++)
	{
	  printf ("[%d] ", j[d][f]);
	}
      printf ("\n");
    }
}


 
 
int main (){
  setlocale (LC_ALL, "Portuguese");
  srand (time (NULL));
  int m[5][5], i, j, b;
  
printf ("\nMatriz:\n");
  for (i = 0; i < 5; i++)
    {
      for (j = 0; j < 5; j++)
	{
	  m[i][j] = (rand () % 10) + 1;
	  printf ("[%d] ", m[i][j]);
	}
      printf ("\n");
    }
  printf("Nova Matriz\n");
 
multiplicamatriz (m);
  
return 0;
}
