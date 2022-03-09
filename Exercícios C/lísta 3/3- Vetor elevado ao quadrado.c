#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (void)
{
	int vetor1[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10} ;
	int vetor2[10] ;
	int i ;
	
	for (i = 0; i < 10; i++)
	{
		vetor2[i] = pow (vetor1[i], 2) ;
		
		printf ("\n %d \n", vetor2[i]) ;
	}
	
	return 0 ;	
	system ("pause") ;
}

