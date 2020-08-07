#include <stdio.h>

typedef struct {
 char nome[10];
 float altura;
 float peso;
 int cpf;
} pessoa;

int main ()
{
	int QTD_PESSOAS=0;
	int cpf;
	
	printf ("digite a quantidade de pessoas: ");
	scanf ("%d", &QTD_PESSOAS);
	
	pessoa pessoas [QTD_PESSOAS];
	
	for (int i=1; (i <= QTD_PESSOAS); i++)
	{
		printf ("\npessoa %i\n", i);
		
		printf ("nome: ");
		scanf ("%s", &pessoas[i].nome);
		
		printf ("altura: ");
		scanf ("%f",&pessoas[i].altura);
		
		printf ("peso: ");
		scanf("%f",&pessoas[i].peso);
		
		printf ("CPF (sem ponto e traco): ");
		scanf ("%d",&pessoas[i].cpf);
					
	}
	
	printf ("\nDigite o CPF para a pesquisa:");
	scanf ("%d",&cpf);
	float imc1, imc2;
	for (int i=1;(i <= QTD_PESSOAS);i++)
	{
		if (cpf == pessoas[i].cpf) {
			imc1 = pessoas[i].altura * pessoas[i].altura;
			imc2 = pessoas[i].peso / imc1;
			
			printf ("o IMC da pessoa %d e: %.1f",i,imc2);
		} else {
			printf ("CPF inválido.");
		}
	}
	
	
}
