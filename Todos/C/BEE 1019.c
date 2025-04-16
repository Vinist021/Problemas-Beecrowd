/*
  autor: Vinist021;
  data: 28/08/2024;
  nome: Conversão de Tempo;
*/

#include <stdio.h>

int main(int argc, char *argv[]) {
	
	int N, horas, minutos, segundos;
	
	scanf("%d", &N);
	
	horas = N / 3600;
	minutos = N / 60 % 60;
	segundos = N % 60;
	
	printf("%d:%d:%d\n", horas, minutos, segundos);
	
	return 0;
}