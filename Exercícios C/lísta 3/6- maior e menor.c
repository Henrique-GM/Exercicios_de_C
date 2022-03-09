#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (void)
{
	setlocale (LC_ALL, "portuguese") ;
	
	int vetor[10] = {10, 15, 11, 9, 8, 24, 32, 19, 55, 1} ;
	int i, maior = 0, menor = 0, auxiliar = 0 ;
	
	for (i = 0; i < 10; i++)
	{
		if (auxiliar == 0)
		{
			maior = vetor[i] ;
			menor = vetor[i] ;
			auxiliar++ ;
		}
		
		else if (vetor[i] > maior )
		{
			maior = vetor[i] ;
		}
				
		else if (vetor[i] < menor)
		{
			menor = vetor[i] ;
		}
	}
	printf ("\n O maior número foi %d e o menor foi %d", maior, menor ) ;
	
	return 0 ;
	system ("pause") ;
}
