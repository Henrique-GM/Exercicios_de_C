#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main (void)
{
	setlocale (LC_ALL, "portuguese") ;
	
	char frase[150] ;
	char numeros[30] = "123" ;
	
	printf ("\n Digite uma frase..: ") ;
	gets (frase) ;

 	strcat (frase, numeros) ;

	printf ("\n") ;

  	printf ("%s", frase) ;
	
	return 0 ;
	system ("pause") ;
}
