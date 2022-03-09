#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main(){
	
	int i;
	
	printf("\n Insira um número inteiro de 1 a 12: ");
	scanf("%d", &i);
	
	switch(i){
		
		case 1 :
			printf("\n Janeiro \n");
		break;
		
		case 2 :
			printf("\n Fevereiro \n");
		break;
		
		case 3 :
			printf("\n Março \n");
		break;
		
		case 4 :
			printf("\n Abril \n");
		break;
		
		case 5 :
			printf("\n Maio \n");
		break;
		
		case 6 :
			printf("\n Junho \n");
		break;
		
		case 7 :
			printf("\n Julho \n");
		break;
		
		case 8 :
			printf("\n Agosto \n");
		break;
		
		case 9 :
			printf("\n Setembro \n");
		break;
		
		case 10 :
			printf("\n Outubro \n");
		break;
		
		case 11 :
			printf("\n Novembro \n ");
		break;
		
		case 12 :
			printf("\n Dezembro\n ");
		break;
		
		default :
			printf("\n Digitado incorretamente \n");
		
	}
	
system("pause");	
return 0;	
}
