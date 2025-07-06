/*
  autor: Vinist021;
  data: 21/08/2025;
  nome: Piso da Escola; 
*/

#include <stdio.h>

int main(int argc, char *argv[]) {
	
	int C, L, T1, T2;
	
	scanf("%d", &C);
	scanf("%d", &L);
	
	T1 = (C * L) + ((C-1) * (L-1));
	
	T2 = (2 * (L-1)) + (2 * (C-1));
	
	printf("%d\n", T1);
	printf("%d\n", T2);
	
	return 0;
	
}