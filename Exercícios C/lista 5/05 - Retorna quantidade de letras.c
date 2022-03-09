#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main (void)
{
	setlocale (LC_ALL, "portuguese") ;
	
	char nome[50] ;
	int tamanho ;
	
	printf ("\n Digite um nome..: ") ;
	gets (nome) ;
	
	tamanho = strlen (nome) ;
	
	printf ("\n A quantidade de letras na string é..: %d", tamanho) ;
	
	return 0 ;
	system ("pause") ;
}
