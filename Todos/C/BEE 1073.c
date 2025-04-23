/*
  autor: Vinist021;
  data: 05/09/2024;
  nome: Quadrado de Pares;
*/

#include <stdio.h>
#include <math.h>

int main(int argc, char *argv[]) {
	
	int N;
	
	scanf("%d", &N);
	
	int x=1;
	while(x <= N){
		if(x % 2 == 0){
			printf("%d^2 = %.0f\n", x, pow(x,2));
		}
	x++;
	}

	return 0;
}