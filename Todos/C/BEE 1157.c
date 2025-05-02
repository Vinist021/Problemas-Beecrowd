/*
  autor: Vinist021;
  data: 16/09/2024;
  nome: Divisores I;
*/

#include <stdio.h>

int main(int argc, char *argv[]) {
	
	int N;
	
	scanf("%d", &N);
	
	for(int i = 1; i <= N; i++){
		if(N % i == 0){
			printf("%d\n", i);
		}
	}
	
	return 0;
}