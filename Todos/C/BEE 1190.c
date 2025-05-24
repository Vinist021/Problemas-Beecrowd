/*
  autor: Vinist021;
  data: 11/10/2024;
  nome: Área Direita;
*/

#include <stdio.h>

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
		
		for(int j = 11; j <= 11; j++){
			resultado += M[1][j];
		}
		for(int j = 10; j <= 11; j++){
			resultado += M[2][j];
		}
		for(int j = 9; j <= 11; j++){
			resultado += M[3][j];
		}
		for(int j = 8; j <= 11; j++){
			resultado += M[4][j];
		}
		for(int j = 7; j <= 11; j++){
			resultado += M[5][j];
		}
		for(int j = 7; j <= 11; j++){
			resultado += M[6][j];
		}
		for(int j = 8; j <= 11; j++){
			resultado += M[7][j];
		}
		for(int j = 9; j <= 11; j++){
			resultado += M[8][j];
		}
		for(int j = 10; j <= 11; j++){
			resultado += M[9][j];
		}
		for(int j = 11; j <= 11; j++){
			resultado += M[10][j];
		}
	}
	
	if(Op == 'M'){
		
		resultado = 1;
		
		for(int j = 11; j <= 11; j++){
			resultado *= M[1][j];
		}
		for(int j = 10; j <= 11; j++){
			resultado *= M[2][j];
		}
		for(int j = 9; j <= 11; j++){
			resultado *= M[3][j];
		}
		for(int j = 8; j <= 11; j++){
			resultado *= M[4][j];
		}
		for(int j = 7; j <= 11; j++){
			resultado *= M[5][j];
		}
		for(int j = 7; j <= 11; j++){
			resultado *= M[6][j];
		}
		for(int j = 8; j <= 11; j++){
			resultado *= M[7][j];
		}
		for(int j = 9; j <= 11; j++){
			resultado *= M[8][j];
		}
		for(int j = 10; j <= 11; j++){
			resultado *= M[9][j];
		}
		for(int j = 11; j <= 11; j++){
			resultado *= M[10][j];
		}
	}
	
	printf("%.1lf\n", resultado);
	
	return 0;
}