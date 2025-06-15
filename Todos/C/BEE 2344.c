/*
  autor: Vinist021;
  data: 03/02/2025;
  nome: Notas da Prova; 
*/

#include <stdio.h>

int main() {
	
	int N;
	
	scanf("%d", &N);
	
	if(N == 0)
		printf("E\n");
	else if(N <= 35)
		printf("D\n");
	else if(N <= 60)
		printf("C\n");
	else if(N <= 85)
		printf("B\n");
	else
		printf("A\n");
	
	return 0;
}