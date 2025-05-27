/*
  autor: Vinist021;
  data: 26/12/2024;
  nome: Prefácio;
*/

#include <stdio.h>

int main(int argc, char *argv[]) {
	
	int a, b;
	int q, r;
	
	scanf("%d %d", &a, &b);
	
	q = a / b;
	r = a % b;
	
	if(r < 0 && b > 0)
	{
		r += b;
		q -= 1;
	}
	else if(r < 0 && b < 0)
	{
		r -=b;
		q += 1;
	}
	
	printf("%d %d\n", q, r);

	return 0;
}