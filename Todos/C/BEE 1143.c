/*
  autor: Vinist021;
  data: 10/09/2024;
  nome: Quadrado e ao Cubo;
*/

#include <stdio.h>
#include <math.h>

int main(int argc, char *argv[]) {
	
	int N;
	
	scanf("%d", &N);
	
	int i=1;
	while(i <= N){
		printf("%d %.0f %.0f\n", i, pow(i, 2), pow(i, 3));
		i++;
	}

	return 0;
}