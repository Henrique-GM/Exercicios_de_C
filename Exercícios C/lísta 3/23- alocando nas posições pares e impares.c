#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//Tá meio seto.
int main (void)
{
	setlocale (LC_ALL, "portuguese") ;
	
	int vetorA[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10} ;
	int vetorB[10] = {11, 12, 13, 14, 15, 16, 17, 18, 19, 20} ;
	int vetorC[20] ;
	int i ;
	
	for (i = 0; i < 20; i++)
	{
		if (i % 2 == 0)
		{
			vetorC[i] = vetorA[i] ;
		}	
		
		else
		{
			vetorC[i] = vetorB[i] ; 	
		}	
	}
	
	for (i = 0; i < 20; i++)
	{
		printf ("\n posição %d do vetorC %d \n", i, vetorC[i]) ;
	}
	
	return 0 ;	
	system ("pause") ;
}
