/*
  autor: Vinist021;
  data: 06/09/2024;
  nome: Soma de Ímpares Consecutivos II
*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	int N, X, Y, qtNum, numEntre, menor = 1000, numEntreImpar, mediaImpar=0, totalImpar=0, numImpar=0;
	
	scanf("%d", &N);
	
	for(int i = 0; i < N; i++){
		menor = 100000;
		scanf(" %d %d", &X, &Y);
		if(menor > X){
			menor = X;
		}
		if(menor > Y){
			menor = Y;
		}
		if(X != Y){
			qtNum = abs(X-Y) - 1;
		}	else {
				qtNum = 0;
			}

		for(int j = 0; j < qtNum; j++){
			numEntre = ++menor;
		 	if(numEntre % 2 == 1 || numEntre % 2 == -1){
		 		numEntreImpar = numEntre;
		 		totalImpar += numEntreImpar;
		 		numImpar++;
		 	}
		}
		if(qtNum > 0 && numImpar > 0){
			mediaImpar = totalImpar / numImpar;
		}	else {
				mediaImpar = 0;
			}
		printf("%d\n", totalImpar);
		numImpar = 0;
		totalImpar = 0;
	}
    
	return 0;
}