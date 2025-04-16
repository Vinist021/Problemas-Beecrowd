/*
  autor: Vinist021;
  data: 30/10/2024;
  nome: Cédulas;
*/

#include <stdio.h>

int main(int argc, char *argv[]) {
	
	int N, NInicial, Qt100 = 0, Qt50 = 0, Qt20 = 0, Qt10 = 0, Qt5 = 0, Qt2 = 0, Qt1 = 0; 
	
	scanf("%d", &N);
	NInicial = N;
	
	while(N >= 100){
		N = N - 100;
		Qt100++;
	}
	
	while(N >= 50){
		N = N - 50;
		Qt50++;
	}
	
	while(N >= 20){
		N = N - 20;
		Qt20++;
	}
	
	while(N >= 10){
		N = N - 10;
		Qt10++;
	}
	
	while(N >= 5){
		N = N - 5;
		Qt5++;
	}
	
	while(N >= 2){
		N = N - 2;
		Qt2++;
	}
	
	while(N >= 1){
		N = N - 1;
		Qt1++;
	}
	
	printf("%d\n", NInicial);
	printf("%d nota(s) de R$ 100,00\n", Qt100);
	printf("%d nota(s) de R$ 50,00\n", Qt50);
	printf("%d nota(s) de R$ 20,00\n", Qt20);
	printf("%d nota(s) de R$ 10,00\n", Qt10);
	printf("%d nota(s) de R$ 5,00\n", Qt5);
	printf("%d nota(s) de R$ 2,00\n", Qt2);
	printf("%d nota(s) de R$ 1,00\n", Qt1);
	
	return 0;
}