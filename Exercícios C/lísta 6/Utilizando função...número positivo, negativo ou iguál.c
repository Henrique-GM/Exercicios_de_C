#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

float NumeroPositivoNegativoOuIgual (float Numero) 
{ //Fun��o para verificar se � positivo, negativo ou igual.
	
	if (Numero > 0)  //Bloco de codigo "if, else if e else" encadeados para sa�das de dados...1 = n�mero positivo, -1 = n�mero negativo, 0 = n�mero igual. 
	{
		printf ("\n Se � maior que 0 � --1-- \n") ;		
	}
	
	else if (Numero < 0) 
	{	
	 printf ("\n Se � menor que 0 � -- -1-- \n") ; 	
	} 
		
	else 
	{
	 printf ("\n � igual � 0 � -- 0 --") ;
	}
}
		

	
	
	
int main () 
{
	
	float Numero ;
	
	setlocale (LC_ALL, "portuguese") ;
	
	printf ("\n Digite um n�mero: ") ; //entrada de um n�mero para vereificar se � positivo, negativo ou igual.
	scanf ("%f", &Numero) ;
	
	NumeroPositivoNegativoOuIgual (Numero) ; //Invocando fu��o
	
system ("pause") ;	
return 0 ;	

}

