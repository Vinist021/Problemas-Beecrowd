/*
  autor: Vinist021;
  data: 21/11/2024;
  nome: Sequência Lógica 2;
*/

#include <stdio.h>

int main(int argc, char *argv[]) {
	
	int x, y, auxValor = 1, auxQtd = 1;
	
	scanf("%d %d", &x, &y);
	
	while(auxValor <= y)
	{	
		if(auxQtd % x == 0)
		{
			printf("%d\n", auxValor);
		}
		else
		{
			printf("%d ", auxValor);
		}
		
		auxValor++;
		auxQtd++;
	}
	
	return 0;
}