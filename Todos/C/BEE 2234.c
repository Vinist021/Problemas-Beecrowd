/*
  autor: Vinist021;
  data: 03/02/2025;
  nome: Cachorros-Quentes; 
*/

#include <stdio.h>

int main() {
	
	int H, P;
	float result;
	
	scanf("%d %d", &H, &P);
	
	result = (float)H / (float)P;
	
	printf("%.2f\n", result);
	
	return 0;
}