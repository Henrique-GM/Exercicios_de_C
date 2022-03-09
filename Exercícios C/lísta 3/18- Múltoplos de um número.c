#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (void)
{
	setlocale (LC_ALL, "portuguese") ;

	int vetor[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10} ;
	int numero, i ;
	
	for (i = 0; i < 10; i++) 
	{
    	printf ("\n %d x %d = %d",vetor[5], i, vetor[5] * i) ;
    }
    
	return 0 ;
	system ("pause") ;
}
