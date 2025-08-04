/*
  autor: Vinist021;
  data: 15/02/2025;
  nome: Sobrinho do Meio;
*/

#include <stdio.h>

int maior(int a, int b, int c)
{
	int mai = a;
	if(mai < b)
		 mai = b;
	if(mai < c)
		mai = c;
		
	return mai;
}

int menor(int a, int b, int c)
{
	int men = a;
	if(men > b)
		 men = b;
	if(men > c)
		men = c;
		
	return men;
}

int main() {
	
	int H, Z, L;
	
	scanf("%d %d %d", &H, &Z, &L);
	
	int maiorNum = maior(H, Z, L);
	int menorNum = menor(H, Z, L);
	
	if(H != maiorNum && H != menorNum)
		printf("huguinho\n");
	else if(Z != maiorNum && Z != menorNum)
		printf("zezinho\n");
	else
		printf("luisinho\n");
	
	return 0;
}