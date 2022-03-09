#include <stdio.h>
#include <stdlib.h>

int main (void)
{
	int vetor[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10} ;
	int i, cont = 0 ;
	
	for (i = 0; i < 10; i++)
	{
		if (vetor[i] % 2 == 0)
		{
    		cont = cont + 1 ;
 
			printf ("\n %d \n", vetor[i]) ;
			
			printf ("\n ") ;	
		}	
	}
 	 printf ("\n Sao %d numeros pares encontrados", cont) ;

	return 0 ;
	system ("pause") ;
}
