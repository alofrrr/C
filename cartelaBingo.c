#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main() {
	setlocale(LC_ALL, "Portuguese");
	srand(time(NULL));
	int m[5][5], i, j, vetor[25], aux;
	printf("Sua cartela: \n\n");
	for (i = 0; i < 25; i++) {
		do {
			vetor[i] = rand() % 100;
			aux = 0;
			for (j = 0; j < i; j++)
				if (vetor[i] == vetor[j])
					aux = 1;
		} while (aux == 1);
	}
	aux = 0;
	for (i=0; i<5; i++) {
		for (j=0; j<5; j++) {
			m[i][j] = vetor[aux];
			aux++;
		}
	}
	for(i=0; i<5; i++) {
		for(j=0; j<5; j++) {
			printf("[%d] ", m[i][j]);
		}
		printf("\n");
	}
	printf("\nBoa sorte!\n");
	return 0;
}
