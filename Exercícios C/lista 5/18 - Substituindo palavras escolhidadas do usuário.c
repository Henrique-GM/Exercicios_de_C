#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main (void)
{
	setlocale (LC_ALL, "portuguese") ;
	
	char palavra[50] ;
	char substituir[2] ;
	char substituta[2] ;
	int i, j, z ;
	
	printf ("\n digite uma palavra..: ") ;
	gets (palavra) ;
	
	printf ("\n Digite à palavra que deseja substituir..: ") ;
	gets (substituir) ;
	
	printf ("\n Digite à palavra que será à substituta..: ") ;
	gets (substituta) ;
	
	for (i = 0; i < strlen (palavra); i++) // percorrendo o índice i.
	{
		for (j = 0; j < strlen (substituir); j++) // percorrendo o índice j.
		{
			for (z = 0; z < strlen (substituta); z++) // percorrendo o índice z.
			{
				if (palavra[i] == substituir[j])
				{
					palavra[i] = substituta[z] ;
				}
			}
		}
	}
	
	printf ("\n") ;
	
	printf ("\n À palavra substituta é..: %s", palavra) ;
	
	return 0 ;	
	system ("pause") ;
}
