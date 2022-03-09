#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (void)
{
	setlocale (LC_ALL, "portuguese") ;
	
	int Inteiro_Positivo, i ;
	
	printf ("\n Digite um número...: ") ;
	scanf ("%d", &Inteiro_Positivo) ;
	
	printf ("\n") ;
	
	for (i = 0; i <= Inteiro_Positivo; i++)
	{
		printf ("%d \n", i) ;
	}
	
	return 0 ;
	system ("pause") ;
}
