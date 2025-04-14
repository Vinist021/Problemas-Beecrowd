/*
  autor: Vinist021;
  data: 22/08/2024;
  nome: Diferença;
*/

#include <stdio.h>

int main(int argc, char *argv[]) {
	
	int A, B, C, D, dif;
	
	scanf("%d", &A);
	scanf("%d", &B);
	scanf("%d", &C);
	scanf("%d", &D);
	
	dif = (A * B - C * D);
	
	printf("DIFERENCA = %d\n", dif);
	
	return 0;
}