/*
  autor: Vinist021;
  data: 11/09/2024;
  nome: Ultrapassando Z;
*/

#include <stdio.h>

int main(int argc, char *argv[]) {
	
	int X, Z, soma=0, cont=0;
	
	scanf("%d %d", &X, &Z);
	
	while(Z <= X){
		scanf("%d", &Z);
	}
	
	while(soma <= Z){
		soma += X + cont;
		cont++;
	}
	
	printf("%d\n", cont);
	
	return 0;
}