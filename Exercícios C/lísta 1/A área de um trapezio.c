#include<stdio.h>
#include<stdlib.h>
int main () {
	
	float BaseMenor, BaseMaior, Altura, Area ;
	
	printf ("\n Digite a base menor: ") ;
	scanf ("%f", &BaseMenor) ;
	
	printf ("\n") ;
	
	printf ("\n Digite a base maior: ") ;
	scanf ("%f", &BaseMaior) ;
	
	printf ("\n") ;
	
	printf ("\n Digite a altura: ") ;
	scanf ("%f", &Altura) ;
	
	printf ("\n") ;
	
	if ((BaseMenor <= 0) && (BaseMaior <= 0))
	{
		printf("\n digite numeros maiores que 0.\n") ;	
	}
	
	else
	{
		Area = ((BaseMaior + BaseMenor) * Altura) / 2.0 ;
		
		printf ("\n A area eh:%.2f\n ", Area) ;	
	}
	
system ("pause") ;	
return 0 ;	
}
