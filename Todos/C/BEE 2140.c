/*
  autor: Vinist021;
  data: 03/01/2025;
  nome: Duas Notas; 
*/

#include <stdio.h>
#include <string.h>

int inarray(int num, int *array)
{
	for(int i = 0; i < 21; i++)
	{
		if(num == array[i])
		{
			return 0;
		}
	}
	return 1;
}

int main(int argc, char *argv[]) {
	
	int N, M, dif;
	
	int possibilidades[] = {4, 10, 20, 40, 100, 200, 7, 12, 
	22, 52, 102, 15, 25, 55, 105, 30, 60, 110, 70, 120, 150};
	
	scanf("%d %d", &N, &M);
	while(N != 0 && M != 0)
	{
		dif = M - N;
		
		if(inarray(dif, possibilidades) == 0)
			printf("possible\n");
		else
			printf("impossible\n");
		
		scanf("%d %d", &N, &M);	
	}
	
	return 0;
}