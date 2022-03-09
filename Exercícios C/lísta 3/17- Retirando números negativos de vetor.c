#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (void)
{
	setlocale (LC_ALL, "portuguese") ;
	
	int vetor[10] = {1, 2, 3, -4, -5, -6, 7, -8, 9, 10} ;
	int i ;
	
	for (i = 0; i < 10; i++)
	{
		if (vetor[i] < 0) 
		{
			vetor[i] = 0 ; // O vetor que tiver um número negativo, será atribuida a ele 0.	
		}
		printf ("\n valor de vetor ajustado..: %d", vetor[i]) ;
	}
	
	return 0 ;
	system ("pause") ;
}
