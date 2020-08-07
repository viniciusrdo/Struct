#include <stdio.h>

typedef struct {
	char nome[100];
	int matricula;
	float nota1;
	float nota2;
	
} nota;

int main ()
{
	int QTD_ALUNOS=0;
	float media;
	printf ("Digite a quantidade de alunos: ");
	scanf ("%d",&QTD_ALUNOS);
	
	nota notas[QTD_ALUNOS];
	
	
	for (int i=0; (i < QTD_ALUNOS); i++){
		
		printf("\nInforme o numero da matricula(%i): ",i+1);
		scanf("%i",&notas[i].matricula);
		
		printf ("nome: ",notas[i].nome);
		scanf ("%s",&notas[i].nome);
		
		printf ("nota1: ");
		scanf ("%f",&notas[i].nota1);
		
		printf ("nota2: ",&notas[i].nota2);
		scanf ("%f",&notas[i].nota2);
		
	}
	
	for (int i=0; (i < QTD_ALUNOS); i++){
		media = notas[i].nota1 + notas[i].nota2;
		media /= QTD_ALUNOS;
		printf ("\nmatricula: %d \nnome: %s \nmedia: %1.1f\n", notas[i].matricula,notas[i].nome,media);
	
	}
	
}
