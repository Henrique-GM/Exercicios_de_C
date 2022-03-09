#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (void)
{
	setlocale (LC_ALL, "portuguese") ;
	
	int matriz[10][10] ;
	int i, j ;
	
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			printf ("\n digite um número[%d][%d]..: ", i, j) ;
			scanf ("%d", &matriz[i][j]) ;
		}
	}
	
	for (i = 0; i < 10; i++)
	{
		printf ("\n") ;
		
		for (j = 0; j < 10; j++)
		{
			printf ("%d ", matriz[i][j]) ;
		}
	}
			
	return 0 ;	
	systen ("pause") ;
}
