#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main (void)
{
	setlocale (LC_ALL, "portuguese") ;
	
	char palavra[50] ;
	char invertida[50] ;
	int i, j, comprova = 0 ;
	
	printf ("\n Digite uma palavra...: ") ;
	gets (palavra) ;
	
	strcpy (invertida, palavra) ;
	
	//Fun��o para reverter strings.
	strrev (invertida) ;
	
	comprova = strcmp (invertida, palavra) ;
	
	if (comprova == 0)
	{
		printf ("\n � polindromo.") ;
	}
	
	else
	{
		printf ("\n N�o � um polindromo.") ;
	}
	
	return 0 ;
	system ("pause") ;
}
