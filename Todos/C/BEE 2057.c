/*
  autor: Vinist021;
  data: 31/12/2025;
  nome: Fuso Horário; 
*/

#include <stdio.h>

int main() {
	
	int S, T, F;
	int total;
	
	scanf("%d %d %d", &S, &T, &F);
	
	total = S + T + F;
	
	if(total >= 24)
	{
		total -= 24;
	}
	else if(total < 0)
	{
		total += 24;
	}
	
	printf("%d\n", total);
	
	return 0;
}