/*
  autor: Vinist021;
  data: 22/08/2024;
  nome: Entrada e Saída de Números Inteiros; 
*/

#include <stdio.h>

int main(int argc, char *argv[]) {
	
	int A, B, C;
	
	scanf("%d", &A);
	scanf("%d", &B);
	scanf("%d", &C);
	
	printf("A = %d, B = %d, C = %d\n", A, B, C);
	printf("A = %10d, B = %10d, C = %10d\n", A, B, C);
	printf("A = %010d, B = %010d, C = %010d\n", A, B, C);
	printf("A = %-10d, B = %-10d, C = %-10d\n", A, B, C);
	
	return 0;
}