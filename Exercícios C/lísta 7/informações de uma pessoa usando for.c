#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

struct aluno // Estrutura "aluno".
{
	char nome[50] ;
	char curso[50] ;
	int matricula ;
	int numero ;
} ;

int main (void)
{	
	setlocale (LC_ALL, "portuguese") ;
	
	int i ;
	
	
	
	struct aluno informacao[5] ; // Declarando a vari�vel "informacao" e  quantidades de aluno no array.
	
		printf ("------------Inserindo informa��es dos alunos------------\n\n\n") ;	
		
		for (i = 0; i < 5; i++)	
		{	
			printf ("\n Informe seu nome......: ") ;
			scanf ("%s", &informacao[i].nome) ;
			
			printf ("\n Informe seu curso......: ") ;
			scanf ("%s", &informacao[i].curso) ;
			
			printf ("\n Informe sua matr�cula......: ") ;
			scanf ("%d", &informacao[i].matricula) ;
			
			printf ("\n Informe seu n�mero......: ") ;
			scanf ("%d", &informacao[i].numero) ;	
			
			printf ("\n\n") ;		
		}
		
	return 0 ;
	system ("pause") ;
}
