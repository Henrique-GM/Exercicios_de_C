#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main (void)
{
	setlocale (LC_ALL, "portuguese") ;
	
	char frase[100] ;
	
	printf ("\n Digite uma frase com letras mai�sculas..: ") ;
	fgets (frase, 100, stdin) ;
	
	printf ("\n A palavra em min�sculo �..: %s", strlwr(frase)) ;
	
	return 0 ;
	system ("pause") ;
}
