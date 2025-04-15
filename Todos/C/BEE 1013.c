/*
  autor: Vinist021;
  data: 27/08/2024;
  nome: O maior;
*/

#include <stdio.h>

int main(int argc, char *argv[]) {
	
	int A, B, C, maiorI, maiorII, maiorFinal;
	
	scanf("%d %d %d", &A, &B, &C);
	
	maiorI = ((A + B + abs(A - B)) / 2);
	
	maiorII = ((maiorI + C + abs(maiorI - C)) / 2);
	
	maiorFinal = ((maiorI + maiorII + abs(maiorI - maiorII)) / 2);
	
	printf("%d eh o maior\n", maiorFinal);
	
	return 0;
}