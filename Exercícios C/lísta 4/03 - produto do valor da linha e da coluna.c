#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (void)
{
	setlocale (LC_ALL, "portuguese") ;
	
	int i, j ;
	int matriz[6][6] ;
	
	for (i = 0; i < 6; i++)
	{
		printf ("\n\n") ;
		
		for (j = 0; j < 6; j++)
		{
			printf ("%d ", matriz[i][j] = i * j) ; // matriz[i][j] recebe i vezes j. 
		}
	}

	return 0 ;	
	system ("pause") ;
}
