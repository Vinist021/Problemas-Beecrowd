/*
  autor: Vinist021;
  data: 22/12/2024;
  nome: Exame Geral; 
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int compnotas(const void *a, const void *b)
{
	int numA = *(int*)a;
	int numB = *(int*)b;
	
	if(numA > numB)
	{
		return -1;
	}
	else if(numA < numB)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

int main(int argc, char *argv[]) {
	
	int N, Q;
	
	while(1)
	{
		if(scanf("%d %d", &N, &Q) == EOF)
		{
			break;
		}
		
		int notas[N];
		
		int i = 0;
		while(i < N)
		{
			scanf("%d", &notas[i]);
			
			i++;
		}
		
		qsort(notas, N, sizeof(notas[0]), compnotas);
					
		int j = 0;
		while(j < Q)
		{
			int posicao;
			scanf("%d", &posicao);
			printf("%d\n", notas[posicao-1]);
			
			j++;
		}
		
		memset(notas, 0, sizeof(notas));
	}
	
	return 0;
}