#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

struct aluno // Declarando estrutura aluno e seu conteudo.
{
	int matricula ;
	float Nota_Prova_1 ;
	float Nota_Prova_2 ;
	float Nota_Prova_3 ;
	float soma ;
} ;

int main (void)
{
	setlocale (LC_ALL, "portuguese") ;
	
	int i, j ; 
	float maior, maior2, menor ;
	int auxiliar = 0 ;
	float media ;
	char nome_prova1[50] ;
	char nome_menor_media[50] ;
	char nome_maior_media[50] ;
	char nome[50] ;

	// Declarando a variável "informacao" e quantidades de aluno no array.
	struct aluno informacao[2] ; 
	
		printf ("------------Inserindo informações dos alunos------------\n\n\n") ;	
		
		// Laço de repetição para repetir as informações do struct "aluno".
		for (i = 0; i < 2; i++)	
		{	
			printf ("\n Informe seu nome...: ") ;
			fgets (nome, 50, stdin) ;	
			
			printf ("\n Informe sua matrícula...: ") ;
			scanf ("%d", &informacao[i].matricula) ;
			
			printf ("\n Informe sua nota da primeira prova...: ") ;
			scanf ("%f", &informacao[i].Nota_Prova_1) ;
			
			printf ("\n Informe sua nota da segunda prova...: ") ;
			scanf ("%f", &informacao[i].Nota_Prova_2) ;
			
			printf ("\n Informe sua nota da terceira prova...: ") ;
			scanf ("%f", &informacao[i].Nota_Prova_3) ;
			
			printf ("\n\n") ;	
		
			//INCERINDO A SOMA DAS NOTAS, PARA CONFERIR À APROVAÇÃO OU REPROVAÇÃO.
			informacao[i].soma = informacao[i].soma + informacao[i].Nota_Prova_1 + informacao[i].Nota_Prova_2 + informacao[i].Nota_Prova_3 ;
		 
			//INCERINDO À MÉDIAS DAS PROVAS.
			media = (informacao[i].Nota_Prova_1 + informacao[i].Nota_Prova_2 + informacao[i].Nota_Prova_3) / 3 ;
		
		
			// Inserindo condicionais para a comparação da maior nota, da primeira prova dentre os cinco alunos e a maior, e menor media.
			if (auxiliar == 0)
			{
				maior = informacao[i].Nota_Prova_1 ;
				maior2 = media ;
				menor = media ;
				strcpy (nome_prova1, nome) ;
				strcpy (nome_menor_media, nome) ;
				strcpy (nome_maior_media, nome) ;
				auxiliar++ ;
			}
			
			else if (informacao[i].Nota_Prova_1 > maior)
			{
				maior = informacao[i].Nota_Prova_1 ;
				
				strcpy (nome_prova1, nome) ;
			}
			
			else if (media > maior2)
			{
				maior2 = media ;
				
				strcpy (nome_maior_media, nome) ;
			}
			
			else if (media < menor)
			{
				menor = media ;
				
				strcpy (nome_menor_media, nome) ;
			}
			
			//INCERINDO CONDICIONAIS PARA APROVAÇÃO OU REPROVAÇÃO.
			if (informacao[i].Nota_Prova_1 + informacao[i].Nota_Prova_2 + informacao[i].Nota_Prova_3 >= 6)
			{
				printf ("\n O aluno %s foi aprovado", nome) ;
				
				printf ("\n\n") ;
			}
			
			else
			{
				printf ("\n O aluno %s foi reprovado", nome) ;
				
				printf ("\n\n") ;
			}
			
			getchar();
		}
		
		printf ("\n O nome do aluno,com à maior nota da primeira prova foi...: %s", nome_prova1) ;			
	
		printf ("\n O aluno com à maior média geral foi...: %s", nome_maior_media) ;

		printf ("\n O aluno com à menor média...: %s", nome_menor_media) ;
		
	return 0 ;
	system ("pause") ;
}
