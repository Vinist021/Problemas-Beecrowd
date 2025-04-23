/*
  autor: Vinist021;
  data: 05/09/2024;
  nome: Tabuada;
*/

#include <stdio.h>

int main(int argc, char *argv[]) {
	
	int N;
	
	scanf("%d", &N);
	
	int i=1;
	while(i <= 10){
		printf("%d x %d = %d\n", i, N, i * N);
	i++;
	}
	
	return 0;
}