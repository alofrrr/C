#include <stdio.h>
#include <stdlib.h>
#include<locale.h>
/*Ana Laura de Oliveira Ferreira*/
typedef struct
{
    int matricula;
    char nome[40];
    int cod;
    float nota1;
    float nota2;
} Aluno;
int main(
)
{
    setlocale(LC_ALL, "portuguese");
    Aluno alunos[10];
    int i;
    for(i=0; i < 10; i++)
    {
        printf("\nInforme o nome do %i° aluno: ",i+1);
        scanf("%s",alunos[i].nome);
        printf("Informe a matrícula do %i° aluno: ", i+1);
        scanf("%d", &alunos[i].matricula);
        printf("Informe o código da disciplina: ");
        scanf("%d",&alunos[i].cod);
        printf("Informe a primeira nota do %i° aluno: ", i+1);
        scanf("%f", &alunos[i].nota1);
        printf("Informe a segunda nota do %i° aluno: ", i+1);
        scanf("%f", &alunos[i].nota2);
    }
    printf("\n|Nome|\t|Cod. Disciplina|\t|Média|\t|Matrícula|\n");
    for(i=0; i < 10; i++)
    {
        printf("\n%s\t\t",alunos[i].nome);
        printf("%d\t\t ", alunos[i].cod);
        printf(" %.2f\t",(alunos[i].nota1 + (alunos[i].nota2 * 2))/3);
        printf("%d", alunos[i].matricula);
    }
    getchar(
    );
    return 0;
}
