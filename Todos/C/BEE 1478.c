/*
  autor: Vinist021;
  data: 17/10/2024;
  nome: Matriz Quadrada II;
*/

#include <stdio.h>

int main(int argc, char *argv[]) {
	
	int N;
	
	scanf("%d", &N);
	
	while(N != 0){
	
	int matriz[N][N];
	
	for(int i = 0; i < N; i++){
		for(int j = 0; j < N; j++){
			
			if(i == j){
				matriz[i][j] = 1;
			}
			if(i < j){
				matriz[i][j] = ((j - i) + 1);
			}
			if(i > j){
				matriz[i][j] = ((i - j) + 1);
			}
		}
	}
	
	for(int i = 0; i < N; i++){
		for(int j = 0; j < N; j++){
			if(j == 0)
				printf("%3d", matriz[i][j]);
				else
					printf(" %3d", matriz[i][j]);
		}
		printf("\n");	
	}
	printf("\n");
	
	scanf("%d", &N);
	}

	return 0;
}