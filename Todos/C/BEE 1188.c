/*
  autor: Vinist021;
  data: 31/08/2024;
  nome: Área Inferior;
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
		
		for(int j = 1; j <= 10; j++){
			resultado += M[11][j];
		}
		for(int j = 2; j <= 9; j++){
			resultado += M[10][j];
		}
		for(int j = 3; j <= 8; j++){
			resultado += M[9][j];
		}
		for(int j = 4; j <= 7; j++){
			resultado += M[8][j];
		}
		for(int j = 5; j <= 6; j++){
			resultado += M[7][j];
		}
	}
	
	if(Op == 'M'){
		
		resultado = 1;
		
		for(int j = 1; j <= 10; j++){
			resultado *= M[11][j];
		}
		for(int j = 2; j <= 9; j++){
			resultado *= M[10][j];
		}
		for(int j = 3; j <= 8; j++){
			resultado *= M[9][j];
		}
		for(int j = 4; j <= 7; j++){
			resultado *= M[8][j];
		}
		for(int j = 5; j <= 6; j++){
			resultado *= M[7][j];
		}
	}
	
	printf("%.1lf\n", resultado);
	
	return 0;
}