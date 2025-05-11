/*
  autor: Vinist021;
  data: 10/10/2024;
  nome: Substituicao em Vetor I;
*/

#include <stdio.h>

#define tam 10

int main(int argc, char *argv[]) {
	
	int X[tam];
	
	for(int i = 0; i < tam; i++){
		scanf("%d", &X[i]);
		
		if(X[i] <= 0){
			X[i] = 1;
		}
	}
	
	for(int i = 0; i < tam; i++){
		printf("X[%d] = %d\n", i, X[i]);
	}
	
	return 0;
}