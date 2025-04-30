/*
  autor: Vinist021;
  data: 10/09/2024;
  nome: Sequência Lógica;
*/

#include <stdio.h>
#include <math.h>

int main(int argc, char *argv[]) {
	
	int N, total;
	
	scanf("%d", &N);
	
	total = N * 2;
	
	int i=1;
	while(i <= N){
		printf("%d %.0f %.0f\n", i, pow(i, 2), pow(i, 3));
		printf("%d %.0f %.0f\n", i, pow(i, 2)+1, pow(i, 3)+1);
		
		i++;
	}
	
	return 0;
}