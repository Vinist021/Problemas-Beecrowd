/*
  autor: Vinist021;
  data: 26/11/2024;
  nome: Troca em Vetor I;
*/

#include <stdio.h>

#define TAM 20

int main(int argc, char *argv[]) {
	
	int N[TAM], aux;
	int j = TAM - 1;
	
	for(int i = 0; i < TAM; i++)
	{
		scanf("%d", &N[i]);
	}
	
	for(int i = 0; i < (TAM / 2); i++)
	{
		aux = N[i];
		N[i] = N[j];
		N[j] = aux;
		
		j--;
	}
	
	for(int i = 0; i < TAM; i++)
	{
		printf("N[%d] = %d\n", i, N[i]);
	}
	
	return 0;
}