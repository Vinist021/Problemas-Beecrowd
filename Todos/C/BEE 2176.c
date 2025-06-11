/*
  autor: Vinist021;
  data: 02/02/2025;
  nome: Paridade; 
*/

#include <stdio.h>
#include <string.h>

int main() {
	
	char numero[102];
	
	scanf("%s", numero);
	int tam = strlen(numero);
	
	int cont = 0;
	for(int i=0; i<tam; i++)
	{
		if(numero[i] == '1')
			cont++;
	}
	
	if(cont % 2 == 0)
	{
		numero[tam] = '0';
		numero[tam + 1] = '\0';
	}
	else
	{
		numero[tam] = '1';
		numero[tam + 1] = '\0';
	}
	
	printf("%s\n", numero);
	
	return 0;
}