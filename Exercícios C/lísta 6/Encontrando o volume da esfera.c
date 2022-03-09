
#include <stdio.h>
#include <stdlib.H>
#include <locale.h>
#include <math.h>


float Retorna_Volume (float resultado) // Função retorna volume da esfera.
{
	printf ("\n O volume da esfera é....:%.2f ", resultado) ;
}



int main (void)
{
	float raio, resultado, raio2 ;
	
	setlocale (LC_ALL, "portuguese") ;
	
	printf ("\n Digite o raio da esfera....: ") ;
	scanf ("%f", &raio) ;	
	
	
	raio2 = pow (raio, 3) ; // Atribuindo 'raio2' ao raio elevado a 3. 
	
	resultado = (4 * 3.14 * raio2) / 3 ; // Atribuindo ao 'resultado' os cálculos necessários para se encontrar o volume da esfera. 
	
	
	Retorna_Volume (resultado) ; // invocando função.
	
	return 0 ;
	system ("pause") ;
}
