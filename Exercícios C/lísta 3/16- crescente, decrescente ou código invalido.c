#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (void)
{
	setlocale (LC_ALL, "portuguese") ;
	
	float vetor[5] = {-1, 5, 4.8, 2, -6} ;
	float numero ;
	int i ;
	
	printf ("\n Digite o número 1 ou 2 ou um número,deferente dos dois..: ") ;
	scanf ("%f", &numero) ;
	
	if (numero == 1)
	{
		for (i = 0; i <= 4; i++) 
		{
			printf ("\n\n") ;
			printf (" %.1f", vetor[i]) ;		
		}
	}	
		
	else if (numero == 2)
	{
		for (i = 4; i >= 0; i--)
		{
			printf ("\n\n") ;
			printf ("%.1f", vetor[i]) ;
		}
	}
	
	else
	{
		printf ("\n\n") ;
		printf ("\n Código invalido") ;
	}
			
	return 0 ;
	system ("pause") ;
}
