/*
  autor: Vinist021;
  data: 31/08/2024;
  nome: Linha na Matriz;
*/

#include <stdio.h>

#define N 12

int main(int argc, char *argv[]) {
	
	float matriz[N][N];
	float valorFinal, valorSoma;
	int L;
	char T;
	
	scanf("%d", &L);
	
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
			valorSoma = valorSoma + matriz[L][j];
			
			valorFinal = valorSoma / N;
		}
		printf("%.1f\n", valorFinal);
	}
	
	if(T == 'S'){
		for(int j=0; j<N; j++){
			if(j == 0){
				valorFinal = 0;	
			}
			valorFinal = valorFinal + matriz[L][j];
		}
		printf("%.1f\n", valorFinal);
	}
	
	return 0;
}