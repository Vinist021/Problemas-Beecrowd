/*
  autor: Vinist021;
  data: 06/01/2025;
  nome: Fase; 
*/

#include <stdio.h>
#include <stdlib.h>

int compara(const void *a, const void *b)
{
	int *notaA = (int *)a;
	int *notaB = (int *)b;
	
	return *notaB - *notaA;
}

int main(int argc, char *argv[]) {
	
	int N, K;
	
	scanf("%d %d", &N, &K);
	
	int *notas = (int *)malloc(N * sizeof(int));
	
	for(int i = 0; i < N; i++)
	{
		scanf("%d", &notas[i]);	
	}
	
	qsort(notas, N, sizeof(notas[0]), compara);
		
	int pEmpate = K-1;
	int k = 0, classificados = 0;
	while(k < N && notas[k] >= notas[pEmpate])
	{
		classificados++;
		k++;
	}
	
	printf("%d\n", classificados);
	
	free(notas);
	
	return 0;
}