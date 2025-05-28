/*
  autor: Vinist021;
  data: 26/12/2024;
  nome: Nossos Dias Nunca Voltarão;
*/

#include <stdio.h>

int main(int argc, char *argv[]) {
	
	char frase[] = "LIFE IS NOT A PROBLEM TO BE SOLVED";
	int N;
	
	scanf("%d", &N);
	
	for(int i = 0; i < N; i++)
	{
		printf("%c", frase[i]);
	}
	
	printf("\n");
	
	return 0;
}