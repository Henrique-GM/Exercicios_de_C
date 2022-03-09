#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Transforma Celsios em Fahrenheit.

	float Transforma_Fahren (float Fahrenheit, float Celsius)
	{
		Fahrenheit = Celsius * (9.0 / 5.0) + 32.0 ;
		
		printf ("\n O valor de Celsios para Fahrenheit é....: %.2f ", Fahrenheit) ;
	}


int main (void)
{
	setlocale (LC_ALL, "portuguese") ;
	
	float Celsius, Fahrenheit ;
	
	printf ("\n Digite em graus Celsius....: ") ;
	scanf ("%f", &Celsius) ;	
	
	Transforma_Fahren (Fahrenheit, Celsius) ;
	
	return 0 ;
	system ("pause") ;	
}

