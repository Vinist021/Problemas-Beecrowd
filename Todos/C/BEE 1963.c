/*
  autor: Vinist021;
  data: 21/12/2024;
  nome: O Filme; 
*/

#include <stdio.h>

int main(int argc, char *argv[]) {
	
	float A, B, dif, prcnt;
	
	scanf("%f %f", &A, &B);
	
	dif = B - A;
	
	prcnt = (dif / A) * 100.0;
	
	printf("%.2f%%\n", prcnt);
	
	return 0;
}
