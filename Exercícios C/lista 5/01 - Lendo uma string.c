#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (void)
{
	setlocale (LC_ALL, "portuguese") ;
	
	char string[100] ;
	
	printf ("\n Digite uma string digitada foi....: ") ;
	gets(string) ;
	
	printf ("\n A string digitada foi....: %s ", string) ;
	
	return 0 ;
	system ("pause") ;
}
