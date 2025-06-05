/*
  autor: Vinist021;
  data: 26/10/2024;
  nome: Identificando o Chá; 
*/

#include <stdio.h>

int main(int argc, char *argv[]) {
	
	int T, psb[5], corretos = 0;
	
	scanf("%d", &T);
	
	for(int i = 0; i < 5; i++){
		
		scanf(" %d", &psb[i]);
		
		if (psb[i] == T)
			corretos++;
	}	
	
	printf("%d\n", corretos);
	
	return 0;
}