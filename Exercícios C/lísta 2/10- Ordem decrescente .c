#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (void)
{
	setlocale (LC_ALL, "portuguese") ;
	
	int numero, i ;
	
	printf ("\n Digite um número...: ") ;
	scanf ("%d", &numero) ;

	printf ("\n") ;
		
	for (i = numero; i >= 0; i--)
	{
		printf ("%d \n", i) ;
	}
	  
	return 0 ;
	system ("pause") ;
}
