/*
  autor: Vinist021;
  data: 14/02/2025;
  nome: Jogatina UFPR; 
*/

#include <stdio.h>

int main() {
	
	int N, I;
	int uni, jogo;
	
	while(scanf("%d %d", &N, &I) != EOF)
	{
		int cont = 0;
		for(int i = 0; i < N; i++)
		{
			scanf("%d %d", &uni, &jogo);
			
			if(uni == I && jogo == 0)
				cont++;
		}
		printf("%d\n", cont);
	}
	
	return 0;
}