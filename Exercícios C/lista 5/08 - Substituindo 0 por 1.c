#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main (void)
{
	setlocale (LC_ALL, "portuguese") ;

	char comparar[10] = {'0' ,'0', '0', '0', '0', '0', '0', '0', '0', '0'} ;
	int i ;

	for (i = 0; i < 10; i++)
	{
		if (comparar[i] == '0')
		{
			comparar[i] = '1' ;
		}
		
		printf ("\n") ;
		
		printf ("%c ", comparar[i]) ;
	}

	return 0 ;
	system ("pause") ;
}
