#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (void)
{
	setlocale (LC_ALL, "portuguese") ;
	
	int i, j ;
	int matriz[5][5] = {{1, 0, 0, 0, 0} ,
						{0, 1, 0, 0, 0} ,
						{0, 0, 1, 0, 0} ,
						{0, 0, 0, 1, 0} ,
						{0, 0, 0, 0, 1}} ;
								
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (matriz[i][j] < 2)
			{
				printf ("\n A diagonal na posição [%d][%d] principal e os demais: %d \n",i ,j ,matriz[i][j]) ;	
			}
		}
	}
	
	return 0 ;
	system ("pause") ;
}
