#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

Comparando_strings (char string1[50], char string2[50], int i) 
{
	//Se string1 na posição 0 fôr igual à string2 na posição 0,e string1 fôr diferente de caractere nulo e string2 fôr diferente de caractere nulo, repita i++.
	while (string1[i] == string2[i] && string1[i] != '\0' && string2 != '\0' )
	{
		++i ;
	}
	
	// Apos percorrer o vetor se string1 na última posição fôr igual a nulo e string2 na última posição for nulo.
	if (string1[i] == '\0' && string2[i] == '\0')
	{
		printf ("\n À string é igual \n") ;
	}
	else
	{
		printf ("\n à string é diferente \n") ;
	}
}


int main (void)
{
	char string1[50] ;
	char string2[50] ;
	int i = 0 ;
	
	setlocale (LC_ALL, "portuguese") ;
	
	printf ("\n Digite uma string....: ") ;
	scanf ("%s", &string1) ;
	
	printf ("\n Digite outra string....: ") ;
	scanf ("%s", &string2) ;
	
	Comparando_strings ( string1, string2, i) ;
		
	return 0 ;
	system ("pause") ;	
}
