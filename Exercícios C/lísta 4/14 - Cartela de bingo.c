#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

int main (void)
{
	setlocale (LC_ALL, "portuguese") ;

	srand ((unsigned) time (NULL)) ;

	int matriz[5][5] ;
	int i, j ;
	
	for (i = 0; i < 5; i++)
	{
		printf ("\n") ;
			
		for (j = 0; j < 5; i++)
		{
			printf ("%d ", matriz[i][j] = rand () % 100) ;
		}
	}
	
	return 0 ;
	system ("pause") ;
}
