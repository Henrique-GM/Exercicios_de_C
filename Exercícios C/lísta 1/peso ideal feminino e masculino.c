#include<stdio.h>
#include<stdlib.h>
int main(){
		
	float altura, PesoIdealMasculino, PesoIdealFeminino;	
	char S;
	
	printf("\n Digite--M--para masculino e--F--para feminino");
	
	printf("\n");
	
	printf("\n Digite a seu sexo: ");
	scanf(" %c", &S);

	printf("\n");
	
	printf("\n Digite a sua altura: ");
	scanf("%f", &altura);
	
	if (( S != 'M' ) && ( S != 'F' ))
	{
		printf("----digitado errado----Digite em--M--ou--F--");	
	}
	
	printf("\n");
	
	if (S == 'M')
	{
		PesoIdealMasculino = (72.7 * altura) - 58;
		
		printf("Seu peso ideal eh:%.2f\n", PesoIdealMasculino);
	}	

	if (S == 'F')
	{
		PesoIdealFeminino = (62.1 * altura) - 44.7;
		
		printf("\n Seu peso ideal eh:%.2f", PesoIdealFeminino);
	}
    
 	
system("pause");	
return 0;	
}