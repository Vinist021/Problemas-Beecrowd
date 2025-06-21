/*
  autor: Vinist021;
  data: 09/02/2025;
  nome: Escolha Difícil; 
*/

#include <stdio.h>

int main() {
	
	int Ca, Ba, Pa, Cr, Br, Pr;
	int D1, D2, D3, result = 0;
	
	scanf("%d %d %d %d %d %d", &Ca, &Ba, &Pa, &Cr, &Br, &Pr);
	
	D1 = Ca - Cr;
	D2 = Ba - Br;
	D3 = Pa - Pr;
	
	if(D1 < 0)
		result += D1;
	if(D2 < 0)
		result += D2;
	if(D3 < 0)
		result += D3;
	
	result = -result;
	
	printf("%d\n", result);
	
	return 0;
}