/*
  autor: Vinist021;
  data: 29/11/2024;
  nome: Selcao em Vetor I;
*/

#include <stdio.h>

#define N 100

int main(int argc, char *argv[]) {
	
	float A[N];
	
	for(int i = 0; i < N; i++)
	{
		scanf("%f", &A[i]);
	}
	
	for(int i = 0; i < N; i++)
	{
		if(A[i] <= 10)
		{
			printf("A[%d] = %.1f\n", i,  A[i]);	
		}
	}

	return 0;
}