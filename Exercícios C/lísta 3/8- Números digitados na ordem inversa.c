#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (void)
{
	setlocale (LC_ALL, "poruguese") ;	
	
	int vetor[6] = {1, 2, 3, 4, 5, 6} ;
	int i ;
	
	for (i = 5; i >= 0; i--)
	{
		printf ("\n %d \n", vetor[i]) ;
	}
	
	return 0 ;
	system ("pause") ;
}
