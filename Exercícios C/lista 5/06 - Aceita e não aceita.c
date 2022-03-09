#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

void compara_feminino (int idade, char *sexo, char *compara, char *Nome)
{
  if (strcmp (sexo , compara) == 0 && (idade < 25)) // Comparando às strings com o strcmp.
	{
		printf ("\n Essa pessoa de nome %s foi ACEITA", Nome) ;
	}
	
	else 
	{
		printf ("\n NÃO ACEITA") ;
	}
} 

int main (void)
{
	setlocale (LC_ALL, "portuguese") ;
	
	char Nome[50] ;
	char sexo[15] ;	
	char compara[13] = "feminino" ;
	int idade ;
	
	printf ("\n Digite seu nome..: ") ;
	fgets (Nome, 50, stdin) ;
	
	printf ("\n Digite seu sexo..: ") ;
	scanf ("%s", sexo) ;
	
	printf ("\n Digite sua idade..: ") ;
	scanf ("%d", &idade) ;
	
	compara_feminino (idade, sexo, compara, Nome) ;
	
	
	return 0 ;
	system ("pause") ;
}
