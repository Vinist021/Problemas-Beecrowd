/*
  autor: Vinist021;
  data: 10/10/2024;
  nome: Preenchimento de Vetor I;
*/

#include <stdio.h>
#include <stdlib.h>

#define tam 10

int main(int argc, char *argv[]) {
	
	int N[tam], n1;
	
	scanf("%d", &n1);
	
	 for(int i=0; i < tam; i++){
	 	
	 	if(i == 0)
		{
	 		N[i] = n1;
	 		printf("N[%d] = %d\n", i, N[i]);
	 	}
	 	else
	 	{
	 		N[i] = ((N[i-1]) * 2);
	 		printf("N[%d] = %d\n", i, N[i]);
		}	 
	 }
	return 0;
}