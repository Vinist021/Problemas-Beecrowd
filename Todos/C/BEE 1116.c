/*
  autor: Vinist021;
  data: 07/09/2024;
  nome: Dividindo X por Y;
*/

#include <stdio.h>

int main(int argc, char *argv[]) {
	
	int N;
	float X, Y; 
	
	scanf("%d", &N);
	
	for(int i=0; i<N; i++){
		scanf("%f %f", &X, &Y);
		if(Y == 0){
			printf("divisao impossivel\n");
		}	else{
				printf("%.1f\n", X / Y);
			}
	}

	return 0;
}

