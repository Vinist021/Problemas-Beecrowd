/*
  autor: Vinist021;
  data: 10/09/2024;
  nome: Somando Inteiros Consecutivos;
*/

#include <stdio.h>

int main(int argc, char *argv[]) {
	
	int A, N, nTotal=0;
	
	scanf("%d %d", &A, &N);
	
	while(N <= 0){
		scanf("%d", &N);
	}
	
	int i=0;
	while(i < N){
		nTotal += A + i;
		
		i++;
	}
	
	printf("%d\n", nTotal);
	
	return 0;
}