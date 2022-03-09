#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int NumeroIntDevolveDobro (int Numero)
{
	printf ("\n O dobro de %d é %d: \n", Numero, Numero * 2 ) ;
}

int main ()
{
	setlocale (LC_ALL, "portuguese") ;
	
	int Numero ;
	
	printf ("\n digite um valor: ") ;
	scanf ("%d", &Numero) ;
	
	printf ("\n") ;
	
	NumeroIntDevolveDobro (Numero) ;
	
	system ("pause") ; 	
	return 0 ;	
}
