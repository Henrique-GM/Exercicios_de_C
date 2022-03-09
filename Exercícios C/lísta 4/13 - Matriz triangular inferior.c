#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (void)
{
	setlocale (LC_ALL, "portuguese") ;
	
	int i, j ;
	int matriz[4][4] = {{1, 2, 3, 4} ,
					    {6, 7, 8, 9} ,
					    {11, 12, 13, 14} ,
					    {16, 17, 18, 19}} ;
	
	for (i = 0; i < 4; i++)
	{
		printf ("\n") ;
		
		for (j = 0; j < 4; j++)
		{
			printf (" %d", matriz[i][j]) ;
		}
	}
	
	printf ("\n\n") ;
					   
	for (i = 0; i < 4; i++)
	{
		printf ("\n") ;
		
		for (j = i + 1; j < 4; j++)
		{
			printf (" %d", matriz[i][j]) ;
		}
	}
	
	return 0 ;
	system ("pause") ;
}
