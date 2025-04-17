/*
  autor: Vinist021;
  data: 01/11/2024;
  nome: Notas e Moedas;
*/

#include <stdio.h>

int main(int argc, char *argv[]) {
	
	double N, Qt100 = 0, Qt50 = 0, Qt20 = 0, Qt10 = 0, Qt5 = 0, Qt2 = 0, Qt1 = 0; 
	double Md50 = 0, Md25 = 0, Md10 = 0, Md5 = 0, Md1 = 0;
	
	scanf("%lf", &N);
	
	//NOTAS
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
	
	//MOEDAS
	while(N >= 1){
		N = N - 1;
		Qt1++;
	}
	
	while(N >= 0.50){
		N = N - 0.50;
		Md50++;
	}
	
	while(N >= 0.25){
		N = N - 0.25;
		Md25++;
	}
	
	while(N >= 0.10){
		N = N - 0.10;
		Md10++;
	}
	
	while(N >= 0.05){
		N = N - 0.05;
		Md5++;
	}
	
	while(N >= 0.01){
		N = N - 0.01;
		Md1++;
	}
	
	printf("NOTAS:\n");
	printf("%.0lf nota(s) de R$ 100.00\n", Qt100);
	printf("%.0lf nota(s) de R$ 50.00\n", Qt50);
	printf("%.0lf nota(s) de R$ 20.00\n", Qt20);
	printf("%.0lf nota(s) de R$ 10.00\n", Qt10);
	printf("%.0lf nota(s) de R$ 5.00\n", Qt5);
	printf("%.0lf nota(s) de R$ 2.00\n", Qt2);
	
	printf("MOEDAS:\n");
	printf("%.0lf moeda(s) de R$ 1.00\n", Qt1);
	printf("%.0lf moeda(s) de R$ 0.50\n", Md50);
	printf("%.0lf moeda(s) de R$ 0.25\n", Md25);
	printf("%.0lf moeda(s) de R$ 0.10\n", Md10);
	printf("%.0lf moeda(s) de R$ 0.05\n", Md5);
	printf("%.0lf moeda(s) de R$ 0.01\n", Md1);
	
	return 0;
}