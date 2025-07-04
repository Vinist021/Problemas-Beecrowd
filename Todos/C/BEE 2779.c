/*
  autor: Vinist021;
  data: 12/02/2025;
  nome: Álbum da Copa; 
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int estaPresente(int num, int *vet, int tam)
{
	for(int i = 0; i < tam; i++)
	{
		if(vet[i] == num)
			return 0;
	}
	
	return 1;
}

int main() {
	
	int N, M;
	int *X, *Y;
	scanf("%d %d", &N, &M);
	
	X = (int *)malloc(M * sizeof(int));
	Y = (int *)malloc(M * sizeof(int));
	
	for(int i = 0; i < M; i++)
	{
		scanf("%d", &X[i]);
	}
	
	memset(Y, 0, M * sizeof(int));
	
	int j = 0;
	for(int i = 0; i < M; i++)
	{
		if(estaPresente(X[i], Y, M) == 1)
			Y[j++] = X[i];
	}
		
	int cont = 0;
	
	for(int i = 0; i < M; i++)
	{
		if(Y[i] != 0)
			cont++;
	}
	
	printf("%d\n", N - cont);
	
	free(X);
	free(Y);
	
	return 0;
}