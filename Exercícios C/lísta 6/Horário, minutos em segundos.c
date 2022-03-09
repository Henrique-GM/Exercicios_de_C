#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int Transforma_segundos (int transformadorH, int transformadorM, int S, int M, int H)
{
	transformadorH = (H * 60) * 60 ; // Horas vezes 60, vezes 60.
	
	transformadorM = (M * 60) ; // Minutos vezes 60, vezes 60.
	
	printf ("\n Às horas, minutos convertidos em segundos....:%d:%d:%d", transformadorH, transformadorM, S) ;
}


int main (void)


{
	setlocale (LC_ALL, "portuguese") ;

	
	int H, M, S, transformadorH, transformadorM ;
	
	
	printf ("\n Digite às horas....: ") ;
	scanf ("%d", &H) ;
	
	printf ("\n Digite os minutos....: ") ;
	scanf ("%d", &M) ;
	
	printf ("\n Digite os segundos....: ") ;
	scanf ("%d", &S) ;
	
	Transforma_segundos ( transformadorH,  transformadorM, S, M, H) ;
	
	return 0 ;
	system ("pause") ;	
}
