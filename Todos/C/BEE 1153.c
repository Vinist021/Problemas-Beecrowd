/*
  autor: Vinist021;
  data: 16/09/2024;
  nome: Fatorial Simples;
*/

#include <stdio.h>

int fatorial(int n){
	
	if(n == 0 || n == 1){
		return 1;
	}	else {
			return n * fatorial(n-1);
		}
	
}

int main(int argc, char *argv[]) {
	
	int num, nfatorial;
	
	scanf("%d", &num);
	
	nfatorial = fatorial(num);
	
	printf("%d\n", nfatorial);
	
	return 0;
}