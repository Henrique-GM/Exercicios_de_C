#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (void)
{
	setlocale (LC_ALL, "portuguese") ;
	
	int vetor[6] = {1, 0, 5, -2, 100, 7} ;
	int resultado, i ;
	
	resultado = vetor[0] + vetor[1] + vetor[5] ;
	
	printf ("\n O valor do resultado foi %d", resultado) ;

  	printf ("\n\n") ;
	
	for (i = 0; i < 6; i++)
  	{
    	printf (" \n %d \n", vetor[i]) ;
  	}
	
	return 0 ;
	system ("pause") ;
}
