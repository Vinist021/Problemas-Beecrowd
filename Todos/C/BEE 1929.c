/*
  autor: Vinist021;
  data: 26/01/2025;
  nome: Triângulo;
*/

#include <stdio.h>

int triverif(int a, int b, int c)
{
	if(a + b > c && a + c > b && b + c > a)
		return 0;
	else
		return 1;
}

int main() {
	
	int n1, n2, n3, n4;
	
	scanf("%d %d %d %d", &n1, &n2, &n3, &n4);
	
	if(triverif(n1, n2, n3) == 0 || triverif(n1, n2, n4) == 0||
	   triverif(n1, n3, n4) == 0 || triverif(n2, n3, n4) == 0)
		printf("S\n");
	else
		printf("N\n");
	
	return 0;
}
