/*
  autor: Vinist021;
  data: 17/02/2025;
  nome: Falha do Motor; 
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int N;
	int *vet;
	
	scanf("%d", &N);
	
	vet = (int *)malloc(N * sizeof(int));
	
	for(int i = 0; i < N; i++)
	{
		scanf("%d", &vet[i]);
		
	}
	
	for(int i = 0; i < N-1; i++)
	{
		if(vet[i+1] < vet[i])
		{
			printf("%d\n", i+2);
			exit(0);
		}
	}
	
	printf("%d\n", 0);
	
	return 0;
}