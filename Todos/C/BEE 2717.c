/*
  autor: Vinist021;
  data: 10/02/2025;
  nome: Tempo do Duende; 
*/

#include <stdio.h>

int main() {
	
	int N, A, B;
	
	scanf("%d", &N);
	scanf("%d %d", &A, &B);
	
	if(A + B > N)
		printf("Deixa para amanha!\n");
	else
		printf("Farei hoje!\n");
		
	return 0;
}