#include<stdio.h>
#include<stdlib.h>
int main(){
	
	float numero1, numero2;
	
	printf("\n digite um numero:\n");
	scanf("%f", &numero1);
	
	printf("digite o segundo numero:\n");
	scanf("%f", &numero2);
	
	
	if(numero1 == numero2)
	{
		printf("numeros iguais\n");		
	}
	
	else if(numero1 > numero2)	
	{
		printf("O maior numero eh:%.0f\n", numero1);
	}
	
	else	
	{
		printf("O maior numero eh:%.0f\n", numero2);
	}
	
system("pause");	
return 0;	
}
