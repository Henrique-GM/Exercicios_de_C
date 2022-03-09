#include<stdio.h>
#include<stdlib.h>
int main(){
	
	int MediaProva, prova, nota1, nota2, nota3;
	
	printf("\n Digite a nota da primeira prova: ");
	scanf("%f", &nota1);
	
	printf("\n");
	
	printf("\n Digite a nota da segunda prova: ");
	scanf("%f", &nota2);
	
	printf("\n");
	
	printf("\n Digite a nota da terceira prova: ");
	scanf("%f", &nota3);
	
	printf("\n");
	
	//A terceira prova vale o dobro.
	prova = nota3 * 2;
	MediaProva = (nota1 + nota2 + prova)/3.0;
	
	if(MediaProva < 60){
		printf("\n Voce foi reprovado \n");		
	}
	if(MediaProva >=60){
		printf("\n Voce foi aprovado \n");
	}
	
system("pause");	
return 0;	
}
