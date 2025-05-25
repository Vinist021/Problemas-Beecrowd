/*
  autor: Vinist021;
  data: 24/10/2024;
  nome: Matriz 123;
*/

#include <stdio.h>

int main(int argc, char *argv[]) {
	
	int N;
	
	while(scanf("%d", &N) != EOF){
		
		int mat[N][N];
		
		for(int i = 0; i < N; i++){
			for(int j = 0; j < N; j++){
				if(i == j){
					mat[i][j] = 1;
				}
				if(i == N - j - 1){
					mat[i][j] = 2;
				}
				if(i != j && i != N - j - 1){
					mat[i][j] = 3;
				}
			}
		}
		
		for(int i = 0; i < N; i++){
			for(int j = 0; j < N; j++){
				printf("%d", mat[i][j]);
			}
			printf("\n");
		}
	}
    
	return 0;
}