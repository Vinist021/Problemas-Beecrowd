/*
  autor: Vinist021;
  data: 24/12/2024;
  nome: Pula Sapo; 
*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	int P, N;
	
	scanf("%d %d", &P, &N);
	
	int tamanhos[N];
	
	int i = 0;
	while (i < N)
	{
		scanf("%d", &tamanhos[i]);
		
		i++;
	}
	
	for(int i = 0; i < (N-1); i++)
	{
		int diferenca = tamanhos[i+1] - tamanhos[i];
		if(diferenca > P)
		{
			printf("GAME OVER\n");
			exit(0);	
		}
		if(diferenca < 0 && -diferenca > P)
		{
			printf("GAME OVER\n");
			exit(0);	
		}	
	}
	
	printf("YOU WIN\n");
	
	return 0;
}
