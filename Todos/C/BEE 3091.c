/*
  autor: Vinist021;
  data: 20/08/2024;
  nome: Resto 1.0; 
*/

#include <stdio.h>

int main(int argc, char *argv[]) {
	
	int N1, N2, resto;
	
	scanf("%d", &N1);
	scanf("%d", &N2);
	
	resto = N1 % N2;
	
	printf("%d\n", resto);
	
	return 0;
}