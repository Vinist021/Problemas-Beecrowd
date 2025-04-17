/*
  autor: Vinist021;
  data: 05/11/2024;
  nome: Intervalo;
*/

#include <stdio.h>

int main(int argc, char *argv[]) {
	
	double N;
	
	scanf("%lf", &N);
	
	if(N < 0){
		printf("Fora de intervalo\n");
		return 0;
	}
	
	if(N >= 0 && N <= 25){
		printf("Intervalo [0,25]\n");
	}	else if(N <= 50){
			printf("Intervalo (25,50]\n");
		}	else if(N <= 75){
				printf("Intervalo (50,75]\n)");
			}	else if(N <= 100){
					printf("Intervalo (75,100]\n");
				}	else{
						printf("Fora de intervalo\n");
					}
	return 0;
}