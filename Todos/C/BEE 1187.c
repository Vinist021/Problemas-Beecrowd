/*
  autor: Vinist021;
  data: 05/12/2024;
  nome: Área Superior;
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
		
		for(int j = 1; j <= 10; j++){
			resultado += M[0][j];
		}
		for(int j = 2; j <= 9; j++){
			resultado += M[1][j];
		}
		for(int j = 3; j <= 8; j++){
			resultado += M[2][j];
		}
		for(int j = 4; j <= 7; j++){
			resultado += M[3][j];
		}
		for(int j = 5; j <= 6; j++){
			resultado += M[4][j];
		}
	}
	
	if(Op == 'M'){
		
		resultado = 0;
		
		for(int j = 1; j <= 10; j++){
			resultado += M[0][j];
		}
		for(int j = 2; j <= 9; j++){
			resultado += M[1][j];
		}
		for(int j = 3; j <= 8; j++){
			resultado += M[2][j];
		}
		for(int j = 4; j <= 7; j++){
			resultado += M[3][j];
		}
		for(int j = 5; j <= 6; j++){
			resultado += M[4][j];
		}
		
		resultado = resultado / 30.0;
		
	}
	
	printf("%.1lf\n", resultado);
	
	return 0;
}