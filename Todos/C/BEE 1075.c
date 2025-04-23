/*
  autor: Vinist021;
  data: 15/11/2024;
  nome: Resto 2;
*/

#include <stdio.h>

#define num 10000

int main(int argc, char *argv[]) {
	
	int N;
	
	scanf("%d", &N);
	
	for(int i = 1; i <= num; i++)
	{
		if(i % N == 2)
		{
			printf("%d\n", i);
		}
	}
	
	return 0;
}