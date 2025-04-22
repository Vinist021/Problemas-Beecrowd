/*
  autor: Vinist021;
  data: 13/11/2024;
  nome: Soma de Impares Consecutivos I;
*/

#include <stdio.h>

int main(int argc, char *argv[]) {
	
	int x, y, aux, somaimpares = 0;
	
	scanf("%d %d", &x, &y);
	
	if(y < x){
		aux = y;
		y = x;
		x = aux;
	}
	
	x++;
	
	while(x < y){
		
		if(x % 2 == 1 || x % 2 == (-1)){
			somaimpares += x;
		}
		x++;		
	}
	
	printf("%d\n", somaimpares);

	return 0;
}