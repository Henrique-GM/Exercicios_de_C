#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (void)
{
	setlocale (LC_ALL, "portuguese") ;
	
	int vetor[5] = {1, 2, 3, 4, 5} ;
	int i, maior = 0, menor = 0, auxiliar = 0, soma, media ;

	for (i = 0; i < 5; i++)
	{
		if (auxiliar == 0)
		{
			maior = vetor[i] ;
			menor = vetor[i] ;
			auxiliar++ ;
		}	
		
		else if (vetor[i] > maior)
		{
			maior = vetor[i] ;
		}
		
		else if (vetor[i] < menor)
		{
			menor = vetor[i] ;
		}
		
		soma = soma + vetor[i] ;
	}

	media = soma / 5 ;
	
	printf ("\n O maior é %d e o menor é %d e à média %d", maior, menor, media) ;
	
	return 0 ;
	system ("pause") ;
}
