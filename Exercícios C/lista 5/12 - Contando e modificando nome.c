#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main (void)
{
	setlocale (LC_ALL, "portuguese") ;
	
	char nome[50] ;
	int i, j, cont = 0 ;
	char vogais[11] = "aeiouAEIOU" ; // Inicializando vetor vogais.
	
	printf ("\n Digite um nome..: ") ;
	fgets (nome, 50,stdin) ;
	
	printf ("\n") ;
	
	for (i = 0; i < strlen (nome); i++) // Percorrendo quantidades de 'nome'.
	{
		for (j = 0; j < strlen (vogais); j++) // Percorrendo quantidades de 'vogais'.
		{
			if (nome[i] == vogais[j]) // Condição se 'i' possui vogais.
			{
				cont++ ; // Conta vogais.
				
				nome[i] = 'f' ; // Substitui a vogal por f.	
			}
		}
	}
	
	printf ("\n Às quantidades de vogais são..: %d", cont) ;
	
	printf ("\n") ;
	
	printf ("\n À palavra modificada ficou..: %s", nome) ;
	
	return 0 ;
	system ("pause") ;
}
