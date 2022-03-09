#include <stdio.h>
#include <stdlib.h>

int main (void)
{
	int vetor[8] = {1, 2, 3, 4, 5, 6, 7, 8} ;
	int x, y, soma, i ;
	
	for (i = 0; i < 8; i++)
	{
		printf ("\n %d \n", vetor[i]) ;	
	}
	
	printf ("\n") ;
	
	x = vetor[5] ;
	y = vetor[2] ;
	
	soma = x + y ;
	
	printf ("\n O resultado da soma foi..: %d", soma) ;
	
	return 0 ;	
	system ("pause") ;
}

