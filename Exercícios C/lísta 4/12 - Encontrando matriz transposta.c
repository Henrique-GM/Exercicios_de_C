#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (void)
{
	setlocale (LC_ALL, "portuguese") ;

	int i, j ;
	int matriz[3][3] ;

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf ("\n Digite um número[%d][%d]..: ", i, j) ;
			scanf ("%d", &matriz[i][j]) ;
		}
	}
	
	for (i = 0; i < 3; i++)
	{
		printf ("\n") ;
		
		for (j = 0; j < 3; j++)
		{
			printf (" %d", matriz[j][i]) ; // Encontrando matriz transposta.
    	}
	}

	return 0 ;
	system ("pause") ;
}
