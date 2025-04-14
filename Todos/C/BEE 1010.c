/*
  autor: Vinist021;
  data: 25/08/2024;
  nome: Cálculo Simples;
*/

#include <stdio.h>

int main(int argc, char *argv[]) {
	
	int cod1, np1, cod2, np2;
	float vu1, vu2, total;
	
	scanf("%d %d %f", &cod1, &np1, &vu1);
	scanf("%d %d %f", &cod2, &np2, &vu2);
	
	total = (np1 * vu1) + (np2 * vu2);
	
	printf("VALOR A PAGAR: R$ %.2f\n", total);
	
	return 0;
}