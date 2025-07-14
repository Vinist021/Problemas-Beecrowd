/*
  autor: Vinist021;
  data: 20/08/2024;
  nome: Inseto!; 
*/

#include <stdio.h>

int main(int argc, char *argv[]) {
	
	int C;
	float N;
	
	scanf("%d", &C);
	
	float Nx[C];
	
	for(int i=0; i<C; i++){
		scanf("%f", &N);
		Nx[i] = N;
	}
	
	for(int i=0; i<C; i++){
		if(Nx[i] <= 8000.00){
			printf("Inseto!\n");
		} else {
			printf("Mais de 8000!\n");
		}
		
	}
	return 0;
}