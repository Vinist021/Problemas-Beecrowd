/*
  autor: Vinist021;
  data: 28/09/2024;
  nome: Preenchimento de Vetor II;
*/

#include <stdio.h>

int main(int argc, char *argv[]) {
	
	int T;
	int i= 0;
	int j= 0;
	
	scanf("%d", &T);
	
	while(i<1000){
		printf("N[%d] = %d\n", i, j );
		i++;
		j++;
		if(j == T){
			j = 0;
		}
	}
	return 0;	
}
