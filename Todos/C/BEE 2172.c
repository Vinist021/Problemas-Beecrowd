/*
  autor: Vinist021;
  data: 30/01/2025;
  nome: Evento; 
*/

#include <stdio.h>

int main() {
	
	int X;
	long long int M;
	
	while(1)
	{
		scanf("%d %lld", &X, &M);
		
		if(X == 0 && M == 0)
			break;
		
		printf("%lld\n", X * M);	
	}
    
	return 0;
}