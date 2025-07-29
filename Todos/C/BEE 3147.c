/*
  autor: Vinist021;
  data: 14/02/2024;
  nome: A Batalha dos Cinco Exércitos; 
*/

#include <stdio.h>

int main() {
	
	int H, E, A, O, W, X;
	int TBom, TRuim;
	
	scanf("%d %d %d %d %d %d", &H, &E, &A, &O, &W, &X);
	
	TBom  = H + E + A + X;
	TRuim = O + W;
	
	if(TBom >= TRuim)
		printf("Middle-earth is safe.\n");
	else
		printf("Sauron has returned.\n");
	
	return 0;
}