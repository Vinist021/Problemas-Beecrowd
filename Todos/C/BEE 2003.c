/*
  autor: Vinist021;
  data: 29/12/2024;
  nome: Domingo de Manhã; 
*/

#include <stdio.h>

int main(int argc, char *argv[]) {
	
	int hora, minutos, atraso;
	
	while(1)
	{
		if(scanf("%d:%d", &hora, &minutos) == EOF)
		{
			break;
		}
		if(hora >= 7)
		{
			atraso = ((hora - 7) * 60) + minutos;
		}
		else
		{
			atraso = 0;
		}
		printf("Atraso maximo: %d\n", atraso);
	}
	
	return 0;
}