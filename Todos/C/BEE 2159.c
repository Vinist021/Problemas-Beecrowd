/*
  autor: Vinist021;
  data: 11/01/2025;
  nome: Número Aproximado de Primos; 
*/

#include <stdio.h>
#include <math.h>

int main() {
	
	int N;
	double P, M;
	
	scanf("%d", &N);
	
	P = N / log(N);
	
	M = 1.25506 * P;
	
	printf("%.1lf %.1lf\n", P, M);
	
	return 0;
}