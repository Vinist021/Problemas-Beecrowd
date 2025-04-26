/*
  autor: Vinist021;
  data: 18/11/2024;
  nome: Sequência de Números e Soma
*/

#include <stdio.h>

int main(int argc, char *argv[]) {
	
	int X, Y;
	int auxX, auxY, auxComp;
	int somaFatores = 0;
	
	while(1)
	{
		scanf("%d %d", &X, &Y);
		
		if(X <= 0 || Y <= 0)
		{
			break;	
		}
		 
		auxX = X, auxY = Y;
		if(auxY < auxX)
		{
			auxComp = auxY;
			auxY = auxX;
			auxX = auxComp;
		}
		
		while(auxX <= auxY)
		{
			printf("%d ", auxX);
			somaFatores += auxX;
			auxX++;
		}
		printf("Sum=%d\n", somaFatores);
		
		somaFatores = 0;	
	}
	return 0;
}