/*
  autor: Vinist021;
  data: 07/11/2024;
  nome: Múltiplos;
*/

#include <stdio.h>

int main(int argc, char *argv[]) {
	
	int A, B;
	
	scanf("%d %d", &A, &B);
	
	if(A % B == 0 || B % A == 0)
	{
		printf("Sao Multiplos\n");
	}
	else
	{
		printf("Nao sao Multiplos\n");	
	}
	
	return 0;	
}