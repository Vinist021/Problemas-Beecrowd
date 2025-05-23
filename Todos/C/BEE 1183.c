/*
  autor: Vinist021;
  data: 31/08/2024;
  nome: Acima da Diagonal Principal;
*/

#include <stdio.h>
#include <stdlib.h>

#define N 12

int main(int argc, char *argv[]) {
	
	float matriz[N][N];
	float valorFinal, valorSoma;
	char T;
	
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
			
			for(int k=1; k<=11; k++){
				valorSoma += matriz[0][k];
			}
			for(int k=2; k<=11; k++){
				valorSoma += matriz[1][k];
			}
			for(int k=3; k<=11; k++){
				valorSoma += matriz[2][k];
			}
			for(int k=4; k<=11; k++){
				valorSoma += matriz[3][k];
			}
			for(int k=5; k<=11; k++){
				valorSoma += matriz[4][k];
			}
			for(int k=6; k<=11; k++){
				valorSoma += matriz[5][k];
			}
			for(int k=7; k<=11; k++){
				valorSoma += matriz[6][k];
			}
			for(int k=8; k<=11; k++){
				valorSoma += matriz[7][k];
			}
			for(int k=9; k<=11; k++){
				valorSoma += matriz[8][k];
			}
			for(int k=10; k<=11; k++){
				valorSoma += matriz[9][k];
			}
			for(int k=11; k<=11; k++){
				valorSoma += matriz[10][k];
			}
			
			valorFinal = ((valorSoma / 66.0) / 12.0);
		}
			printf("%.1f\n", valorFinal);
	}
	
	if(T == 'S'){
		for(int j=0; j<N; j++){
			if(j == 0){
				valorFinal = 0;	
			}
		
			for(int k=1; k<=11; k++){
				valorFinal += matriz[0][k];
			}
			for(int k=2; k<=11; k++){
				valorFinal += matriz[1][k];
			}
			for(int k=3; k<=11; k++){
				valorFinal += matriz[2][k];
			}
			for(int k=4; k<=11; k++){
				valorFinal += matriz[3][k];
			}
			for(int k=5; k<=11; k++){
				valorFinal += matriz[4][k];
			}
			for(int k=6; k<=11; k++){
				valorFinal += matriz[5][k];
			}
			for(int k=7; k<=11; k++){
				valorFinal += matriz[6][k];
			}
			for(int k=8; k<=11; k++){
				valorFinal += matriz[7][k];
			}
			for(int k=9; k<=11; k++){
				valorFinal += matriz[8][k];
			}
			for(int k=10; k<=11; k++){
				valorFinal += matriz[9][k];
			}
			for(int k=11; k<=11; k++){
				valorFinal += matriz[10][k];
			}
		
		}
			printf("%.1f\n", valorFinal);
	}
	
	return 0;
}