#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

Comparando_strings (char string1[50], char string2[50], int i) 
{
	//Se string1 na posi��o 0 f�r igual � string2 na posi��o 0,e string1 f�r diferente de caractere nulo e string2 f�r diferente de caractere nulo, repita i++.
	while (string1[i] == string2[i] && string1[i] != '\0' && string2 != '\0' )
	{
		++i ;
	}
	
	// Apos percorrer o vetor se string1 na �ltima posi��o f�r igual a nulo e string2 na �ltima posi��o for nulo.
	if (string1[i] == '\0' && string2[i] == '\0')
	{
		printf ("\n � string � igual \n") ;
	}
	else
	{
		printf ("\n � string � diferente \n") ;
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
