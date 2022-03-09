#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (void)
{
	char string[100] ;
	int Conte_caractere = 0 ; // Vai servir no ciclo enquanto para inicia-lo com 0.
	
	setlocale (LC_ALL, "portuguese") ;
	
	printf ("\n Digite uma string....: ") ;
	gets (string) ;
	
	while (string[Conte_caractere] != '\0') // O ciclo só ira ser encerrado quando for igua à \0.
	{
		Conte_caractere++ ;
	}
	
	printf ("\n A quantidade de caracteres contadas foi....: %d", Conte_caractere) ;
		
	return 0 ;
	system ("pause") ;	
}
