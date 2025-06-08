/*
  autor: Vinist021;
  data: 07/01/2025;
  nome: Galopeira; 
*/

#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {
	
	int C;
	
	scanf("%d", &C);
	
	for(int i = 0; i < C; i++)
	{
		char palavra[10001];
		
		scanf(" %s", palavra);
		
		int tam = strlen(palavra);
		
		double tempo = tam / 100.0;
		
		printf("%.2lf\n", tempo);		
		
	}
    
	return 0;
}