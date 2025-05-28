/*
  autor: Vinist021;
  data: 15/12/2024;
  nome: A Resposta de Theon;
*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	int N, menor, posMenor;
	
	scanf("%d", &N);
	
	int T[N];
	
	for(int i = 0; i < N; i++)
	{
		scanf("%d", &T[i]);
	}
	
	for(int i = 0; i < N; i++)
	{
		if(i == 0)
		{
			menor = T[i];
			posMenor = i + 1;
		}
		else if(T[i] < menor)
		{
			menor = T[i];
			posMenor = i + 1;
		}
	}
	
	printf("%d\n", posMenor);
	
	return 0;
}