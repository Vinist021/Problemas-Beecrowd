/*
  autor: Vinist021;
  data: 21/11/2024;
  nome: Resto da Divisão;
*/

#include <stdio.h>

int main(int argc, char *argv[]) {
	
	int x, y, aux, auxCres;
	
	scanf("%d %d", &x, &y);
	
	if (x > y)
	{
		auxCres = x;
		x = y;
		y = auxCres;	
	}	
	
	aux = x + 1;
	
	while(aux < y)
	{
		
		if(aux % 5 == 2 || aux % 5 == 3)
		{
			printf("%d\n", aux);
		}
		
		aux++;
	}
	
	return 0;
}