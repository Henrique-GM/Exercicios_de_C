#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (void)
{
	setlocale (LC_ALL, "portuguese") ;
	
	int i, j ;
	int matriz[4][4] = {{ 1, 2, 3, 4} , 
						{ 5, 6, 7, 8} ,
						{ 9, 10, 11, 12} ,
						{13, 14, 15, 16}} ;
					 
	for (i = 0; i < 4; i++)
	{	
		for (j = 0; j < 4; j++)
		{
			if (matriz[i][j] > 10)
			{
				printf ("\n Os números maiores que 10 são: %d \n", matriz[i][j]) ;
			}
		}
	}
	
	return 0 ;
	system ("pause") ;
}
