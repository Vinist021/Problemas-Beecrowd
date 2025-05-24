/*
  autor: Vinist021;
  data: 05/12/2024;
  nome: Área Esquerda;
*/

#include <stdio.h>
#include <stdlib.h>

#define tam 12

int main(int argc, char *argv[]) {
	
	double M[tam][tam], resultado;
	char Op;
	
	scanf("%c", &Op);
	
	for(int i = 0; i < tam; i++){
		for(int j = 0; j < tam; j++){
			scanf("%lf", &M[i][j]);
		}
	}
	
	if(Op == 'S'){
		
		resultado = 0;
		
		for(int j = 0; j <= 0; j++){
			resultado += M[1][j];
		}
		for(int j = 0; j <= 1; j++){
			resultado += M[2][j];
		}
		for(int j = 0; j <= 2; j++){
			resultado += M[3][j];
		}
		for(int j = 0; j <= 3; j++){
			resultado += M[4][j];
		}
		for(int j = 0; j <= 4; j++){
			resultado += M[5][j];
		}
		for(int j = 0; j <= 4; j++){
			resultado += M[6][j];
		}
		for(int j = 0; j <= 3; j++){
			resultado += M[7][j];
		}
		for(int j = 0; j <= 2; j++){
			resultado += M[8][j];
		}
		for(int j = 0; j <= 1; j++){
			resultado += M[9][j];
		}
		for(int j = 0; j <= 0; j++){
			resultado += M[10][j];
		}
		
		printf("%.1lf\n", resultado);
	}
	
	if(Op == 'M'){
		
		resultado = 0;
		
		for(int j = 0; j <= 0; j++){
			resultado += M[1][j];
		}
		for(int j = 0; j <= 1; j++){
			resultado += M[2][j];
		}
		for(int j = 0; j <= 2; j++){
			resultado += M[3][j];
		}
		for(int j = 0; j <= 3; j++){
			resultado += M[4][j];
		}
		for(int j = 0; j <= 4; j++){
			resultado += M[5][j];
		}
		for(int j = 0; j <= 4; j++){
			resultado += M[6][j];
		}
		for(int j = 0; j <= 3; j++){
			resultado += M[7][j];
		}
		for(int j = 0; j <= 2; j++){
			resultado += M[8][j];
		}
		for(int j = 0; j <= 1; j++){
			resultado += M[9][j];
		}
		for(int j = 0; j <= 0; j++){
			resultado += M[10][j];
		}
		
		printf("%.1lf\n", resultado / 30.0);
	}
		
	return 0;
}