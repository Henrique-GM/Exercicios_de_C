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
	
	//Função para reverter strings.
	strrev (invertida) ;
	
	comprova = strcmp (invertida, palavra) ;
	
	if (comprova == 0)
	{
		printf ("\n É polindromo.") ;
	}
	
	else
	{
		printf ("\n Não é um polindromo.") ;
	}
	
	return 0 ;
	system ("pause") ;
}
