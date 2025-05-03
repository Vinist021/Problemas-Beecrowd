/*
  autor: Vinist021;
  data: 16/09/2024;
  nome: Soma de Pares Consecutivos;
*/

#include <stdio.h>

int main(int argc, char *argv[]) {
	
	int X, contPares = 0, somaPares = 0;
	
	while(1)
	{
		scanf("%d", &X);
		
		if(X == 0)
		{
			break;
		}
		
		while(contPares < 5)
		{
			if(X % 2 == 0)
			{
				somaPares += X;
				contPares++;	
			}		
			X++;	
		}
		
		printf("%d\n", somaPares);
		
		somaPares = 0;
		contPares = 0;	
	}

	return 0;
}
