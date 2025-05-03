/*
  autor: Vinist021;
  data: 16/09/2024;
  nome: Soma de Ímpares Consecutivos III;
*/

#include <stdio.h>

int main(int argc, char *argv[]) {
	
	int N, X, Y, j=0, somanum=0;
	
	scanf("%d", &N);
	
	int i = 0;
	while(i < N){
		scanf("%d %d", &X, &Y);
		
		while(j < Y){
			
			if(X % 2 == 1 || X % 2 == -1){
				somanum += X;
				j++;
			}
		X++;
		}
		i++;
		
		printf("%d\n", somanum);
		somanum = 0;
		j = 0;
	}
	
	return 0;
}