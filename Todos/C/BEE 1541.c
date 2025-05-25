/*
  autor: Vinist021;
  data: 12/12/2024;
  nome: Construindo Casas;
*/

#include <stdio.h>
#include <math.h>

int main(int argc, char *argv[]) {
	
	int A, B, C;
	float result;
	
	while(1)
	{
		scanf("%d", &A);
		
		if(A == 0)
			break;
		
		scanf("%d %d", &B, &C);
		
		result = sqrt(((A * B) / (C / 100.0)));
		
		printf("%d\n", (int)result);
	}
	
	return 0;
}