#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (void)
{
	setlocale (LC_ALL, "portuguese") ;

	int alunos[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10} ;
	float metros[10] = {1.50, 1.65, 1.30, 1.64, 1.70, 1.80, 1.75, 1.63, 1.88, 2.00} ;
	int auxiliar = 0 ;
	float maior_altura, menor_altura ;
	int posicao1, posicao2 ;
	int i ;
	
	for (i = 0; i < 10; i++)
	{
		if (auxiliar == 0)
		{
			maior_altura = metros[i] ;
			menor_altura = metros[i] ;
			posicao1 = alunos[i] ;
			posicao2 = alunos[i] ; 
			auxiliar++ ;
		}
		
		else if (metros[i] > maior_altura)
		{
			maior_altura = metros[i] ;
			posicao1 = i ;
		}
		
		else if (metros[i] < menor_altura)
		{
			menor_altura = metros[i] ;
			posicao2 = i ;
		}
	}
	
	printf ("\n O aluno %d têm o maior tamanho de %.2f metros", posicao1, maior_altura) ;
	printf ("\n O aluno %d têm o menor tamanho de %.2f metros", posicao2, menor_altura) ;
	
	return 0 ;
	system ("pause") ;
}
