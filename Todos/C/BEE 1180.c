/*
  autor: Vinist021;
  data: 01/12/2024;
  nome: Menor e Posição;
*/

#include <stdio.h>

int main(int argc, char *argv[]) {
	
	int N, menor, posMenor;
	
	scanf("%d", &N);
	
	int X[N];
	
	for(int i = 0; i < N; i++)
	{	
		scanf("%d", &X[i]);
		
		if (i == 0)
		{
			menor = X[i];	
		}
		
		if(menor > X[i])
		{
			menor = X[i];
			posMenor = i;
		}
	}
		
	printf("Menor valor: %d\n", menor);
	printf("Posicao: %d\n", posMenor);
	
	return 0;
}