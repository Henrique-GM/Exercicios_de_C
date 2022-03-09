#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (void)
{
	setlocale (LC_ALL, "portuguese") ;
	
	int vetor[10] = {-1, -2, -3, -4, 5, 6, 7, 8, 9, 10} ;
	int cont = 0, i, soma ;
	
	for (i = 0; i < 10; i++)
	{
		if (vetor[i] < 0)
		{
			cont = cont + 1 ;
		}	
		
		else if (vetor[i] > 0)
		{
			soma = soma + vetor[i] ;
		}
	}
	
	printf ("\n À quantidade de números negativos foram %d e a soma dos positivos foi %d", cont, soma) ;
	
	return 0 ;
	system ("pause") ;
}
