/*
  autor: Vinist021;
  data: 04/01/2025;
  nome: Pepe, Já Tirei a Vela!; 
*/

#include <stdio.h>

int main(int argc, char *argv[]) {
	
	int N;
	
	scanf("%d", &N);
	
	for(int i = 0; i < N; i++)
	{
		int H, M, O;
		
		scanf("%d %d %d", &H, &M, &O);
		
		if(O == 1)
			printf("%02d:%02d - A porta abriu!\n", H, M);
		else
			printf("%02d:%02d - A porta fechou!\n", H, M);
	}

	return 0;
}