
#include <stdio.h>
#include <stdlib.H>
#include <locale.h>
#include <math.h>


float Retorna_Volume (float resultado) // Fun��o retorna volume da esfera.
{
	printf ("\n O volume da esfera �....:%.2f ", resultado) ;
}



int main (void)
{
	float raio, resultado, raio2 ;
	
	setlocale (LC_ALL, "portuguese") ;
	
	printf ("\n Digite o raio da esfera....: ") ;
	scanf ("%f", &raio) ;	
	
	
	raio2 = pow (raio, 3) ; // Atribuindo 'raio2' ao raio elevado a 3. 
	
	resultado = (4 * 3.14 * raio2) / 3 ; // Atribuindo ao 'resultado' os c�lculos necess�rios para se encontrar o volume da esfera. 
	
	
	Retorna_Volume (resultado) ; // invocando fun��o.
	
	return 0 ;
	system ("pause") ;
}
