/*
  autor: Vinist021;
  data: 15/11/2024;
  nome: Médias Ponderadas;
*/

#include <stdio.h>

#define qtd 100

int main(int argc, char *argv[]) {
	
	int num, maior, posmaior;
	
	int i = 1;
	while(i <= qtd)
	{
		scanf("%d", &num);
		
		if(i == 1)
		{
			maior = num;
			posmaior = i;
		}
		
		if(num > maior)
		{
			maior = num;
			posmaior = i;
		}
		
		i++;
	}
	
	printf("%d\n", maior);
	printf("%d\n", posmaior);
	
	return 0;
}