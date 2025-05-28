/*
  autor: Vinist021;
  data: 14/12/2024;
  nome: Corvo Contador;
*/

#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {
	
	char codigo[8];
	int contCaw = 0, somaCodigo = 0;
	
	while(contCaw < 3)
	{
		scanf(" %7[^\n]s", codigo);
		
		if(strcmp(codigo, "caw caw") == 0)
		{
			printf("%d\n", somaCodigo);
			somaCodigo = 0;
			contCaw++;	
		}
		else if(strcmp(codigo, "---") == 0)
		{
			somaCodigo += 0;
		}
		else if(strcmp(codigo, "--*") == 0)
		{
			somaCodigo += 1;
		}
		else if(strcmp(codigo, "-*-") == 0)
		{
			somaCodigo += 2;
		}
		else if(strcmp(codigo, "-**") == 0)
		{
			somaCodigo += 3;
		}
		else if(strcmp(codigo, "*--") == 0)
		{
			somaCodigo += 4;
		}
		else if(strcmp(codigo, "*-*") == 0)
		{
			somaCodigo += 5;
		}
		else if(strcmp(codigo, "**-") == 0)
		{
			somaCodigo += 6;
		}
		else if(strcmp(codigo, "***") == 0)
		{
			somaCodigo += 7;
		}
				
	}	

	return 0;
}