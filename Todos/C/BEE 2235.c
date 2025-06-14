/*
  autor: Vinist021;
  data: 01/01/2025;
  nome: Andando no Tempo; 
*/

#include <stdio.h>

int main(int argc, char *argv[]) {

	int A, B, C;
	
	scanf("%d %d %d", &A, &B, &C);
	
	if((A - B) == 0 || (A - C) == 0 || (B - C) == 0)
		printf("S\n");
	else if((A + B) == C || (A + C) == B || (B + C) == A)
		printf("S\n");
	else
		printf("N\n");
	
	return 0;
}