#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main(){
	
	setlocale(LC_ALL, "portuguese");
	
	float NotaLaboratorio, NotaAvaliacaoSemestral, NotaAvaliacaoFinal, Media;
	
	
	printf ("\n Digite sua nota obtida no laboratório: ");
	scanf ("%f", &NotaLaboratorio);
	
	printf("\n");
	
	printf ("\n Digite sua nota obtida na avaliação semestral: ");
	scanf ("%f", &NotaAvaliacaoSemestral);
	
	printf ("\n");
	
	printf ("\n Digite sua nota obtida na avaliação final: ");
	scanf ("%f", &NotaAvaliacaoFinal);
	
	printf ("\n");
	
	Media = (NotaLaboratorio + NotaAvaliacaoSemestral + NotaAvaliacaoFinal) / 3.0;
	
	if ((Media > 0) && (Media < 2.9))
	{
		printf("\n Reprovado \n");				
	}
	
	if ((Media > 3.0) && (Media < 4.9))	
	{
		printf("\n Recuperação \n");	
	}
		
	if (Media >= 5.0)	
	{
		printf("\n Aprovado \n");
	}
		
system("pause");	
return 0;	
}
