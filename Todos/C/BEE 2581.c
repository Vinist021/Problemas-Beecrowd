/*
  autor: Vinist021;
  data: 04/12/2024;
  nome: I am Toorg!; 
*/

#include <stdio.h>

int main(int argc, char *argv[]) {
	
	int N;
	char frase[50];
	
	scanf("%d", &N);
	
	int i = 0;
	while(i < N)
	{
		scanf(" %s", frase);
		printf("I am Toorg!\n");
		i++;
	}
	
	return 0;
}