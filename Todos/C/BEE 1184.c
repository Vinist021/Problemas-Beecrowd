/*
  autor: Vinist021;
  data: 01/09/2024;
  nome: Abaixo da Diagonal Principal;
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
			
			for(int k=0; k<=0; k++){		
				valorSoma += matriz[1][k];		
			}
			for(int k=0; k<=1; k++){
				valorSoma += matriz[2][k];
			}
			for(int k=0; k<=2; k++){
				valorSoma += matriz[3][k];
			}
			for(int k=0; k<=3; k++){
				valorSoma += matriz[4][k];
			}
			for(int k=0; k<=4; k++){
				valorSoma += matriz[5][k];
			}
			for(int k=0; k<=5; k++){
				valorSoma += matriz[6][k];
			}
			for(int k=0; k<=6; k++){
				valorSoma += matriz[7][k];
			}
			for(int k=0; k<=7; k++){
				valorSoma += matriz[8][k];
			}
			for(int k=0; k<=8; k++){
				valorSoma += matriz[9][k];
			}
			for(int k=0; k<=9; k++){
				valorSoma += matriz[10][k];
			}
			for(int k=0; k<=10; k++){
				valorSoma += matriz[11][k];
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
								
			for(int k=0; k<=0; k++){		
				valorFinal += matriz[1][k];		
			}
			for(int k=0; k<=1; k++){
				valorFinal += matriz[2][k];
			}
			for(int k=0; k<=2; k++){
				valorFinal += matriz[3][k];
			}
			for(int k=0; k<=3; k++){
				valorFinal += matriz[4][k];
			}
			for(int k=0; k<=4; k++){
				valorFinal += matriz[5][k];
			}
			for(int k=0; k<=5; k++){
				valorFinal += matriz[6][k];
			}
			for(int k=0; k<=6; k++){
				valorFinal += matriz[7][k];
			}
			for(int k=0; k<=7; k++){
				valorFinal += matriz[8][k];
			}
			for(int k=0; k<=8; k++){
				valorFinal += matriz[9][k];
			}
			for(int k=0; k<=9; k++){
				valorFinal += matriz[10][k];
			}
			for(int k=0; k<=10; k++){
				valorFinal += matriz[11][k];
			}
		}
		printf("%.1f\n", valorFinal);
	}
	
	return 0;
}