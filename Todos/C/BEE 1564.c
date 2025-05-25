/*
  autor: Vinist021;
  data: 28/11/2024;
  nome: Vai Ter Copa?;
*/

#include <stdio.h>

int main(int argc, char *argv[]) {
	
	int n;
	
	while(scanf("%d", &n) != EOF)
	{
		if(n == 0)
			printf("vai ter copa!\n");
		else
		    printf("vai ter duas!\n");
		
	}	

	return 0;
}