/*
  autor: Vinist021;
  data: 27/12/2024;
  nome: Há Muito, Muito Tempo Atrás; 
*/

#include <stdio.h>

int main(int argc, char *argv[]) {
	
	int N, ano, data;
	
	scanf("%d", &N);
	
	int i = 0;
	while(i < N)
	{
		scanf("%d", &ano);
		
		data = 2014 - ano;
		
		if(data < 0)
		{
			data = -data;
			printf("%d A.C.\n", data);
		}
		else
		{
			data++;
			printf("%d D.C.\n", data);
		}
		
		i++;
	}
	
	return 0;
}
