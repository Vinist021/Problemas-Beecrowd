/*
  autor: Vinist021;
  data: 31/08/2024;
  nome: Coluna na Matriz;
*/

#include <stdio.h>
#include <stdlib.h>

#define N 12

int main(int argc, char *argv[]) {
	
	float matriz[N][N];
	float valorFinal, valorSoma;
	int C;
	char T;
	
	scanf("%d", &C);
	
	scanf(" %c", &T);
	fflush(stdin);
	
	for(int i=0; i<N; i++){
		for(int j=0; j<N; j++){
			scanf("%f", &matriz[i][j]);
		}
	}
	
	if(T == 'M'){
		for(int j=0; j<N; j++){
			if(j == 0){
				valorSoma = 0;	
			}
			valorSoma = valorSoma + matriz[j][C];
			
			valorFinal = valorSoma / N;
		}
			printf("%.1f\n", valorFinal);
	}
	
	if(T == 'S'){
		for(int j=0; j<N; j++){
			if(j == 0){
				valorFinal = 0;	
			}
			valorFinal = valorFinal + matriz[j][C];
		}
			printf("%.1f\n", valorFinal);
	}
	
	return 0;
}