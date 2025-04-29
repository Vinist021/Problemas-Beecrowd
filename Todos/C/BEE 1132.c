/*
  autor: Vinist021;
  data: 09/09/2024;
  nome: Múltiplos de 13;
*/

#include <stdio.h>

int main(int argc, char *argv[]) {
	
	int X, Y, somanum=0, menor=1000000, maior=0;
	
	scanf("%d %d", &X, &Y);
	
	if(menor > X){
		menor = X;
	}
	if(menor > Y){
		menor = Y;
	}
	if(maior < X){
		maior = X;
	}
	if(maior < Y){
		maior = Y;
	}
	
	for(int i = menor; i <= maior; i++){
		if(i % 13 != 0){
			somanum += i;
		}
	}
	
	printf("%d\n", somanum);
	
	return 0;
    
}