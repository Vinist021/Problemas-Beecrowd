/*
  autor: Vinist021;
  data: 13/02/2024;
  nome: A Árvore de Natal; 
*/

#include <stdio.h>
#include <stdbool.h>

int main() {
	
	int N, a, d, g;
	
	scanf("%d", &N);
	
	for(int i = 0; i < N; i++)
	{
		bool A = false, D = false, G = false;
		
		scanf("%d %d %d", &a, &d, &g);
		
		if(a >= 200 && a <= 300)
			A = true;
		if(d >= 50)
			D = true;
		if(g >= 150)
			G = true;
			
		if(A == true && D == true && G == true)
			printf("Sim\n");
		else
			printf("Nao\n");
	}
	
	return 0;
}