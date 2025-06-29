/*
  autor: Vinist021;
  data: 22/08/2024;
  nome: Entrada e Saída de Carácter; 
*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	char A[2], B[2], C[2];
	
	scanf("%s", &A);
	fflush(stdin);
	
	scanf("%s", &B);
	fflush(stdin);
	
	scanf("%s", &C);
	fflush(stdin);
	
	printf("A = %s, B = %s, C = %s\n", A, B, C);
	
	printf("A = %s, B = %s, C = %s\n", B, C, A);
	
	printf("A = %s, B = %s, C = %s\n", C, A, B);
	
	return 0;
}