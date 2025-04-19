/*
  autor: Vinist021;
  data: 07/11/2024;
  nome: Sort Simples;
*/

#include <stdio.h>

int main(int argc, char *argv[]) {
	
	int N1, N2, N3, aux;
	int n1, n2, n3;
	
	scanf("%d %d %d", &N1, &N2, &N3);
	
	n1 = N1;
	n2 = N2;
	n3 = N3;
	
	if(N1 > N2){
		aux = N1;
		N1 = N2;
		N2 = aux;
	}
	
	if(N1 > N3){ 
		aux = N1;
		N1 = N3;
		N3 = aux;
	}
	
	if(N2 > N3){
		aux = N3;
		N3 = N2;
		N2 = aux;
	}
	
	printf("%d\n%d\n%d\n", N1, N2, N3);
	printf("\n");
	printf("%d\n%d\n%d\n", n1, n2, n3);
	
	return 0;
}