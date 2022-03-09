#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(){
		
  	float num, quadrado, raiz;

	printf ("\n digite um numero para ser elevado ao quadrado e depois transformado em raiz:");
	scanf ("%f", &num);
	
	if (num >= 0)	
	{
		quadrado = num * num;
		raiz = sqrt(num);
	
		printf ("\n o numero elevado ao quadrado eh: %.2f", quadrado);
		printf ("\n o numero tranformado em raiz eh: %.2f", raiz);
	}
		
	else
	{
		printf ("\n digite um numero positivo");
	}

system ("pause");
return 0;
}
