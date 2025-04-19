/*
  autor: Vinist021;
  data: 08/11/2024;
  nome: Tempo de Jogo;
*/

#include <stdio.h>

int main(int argc, char *argv[]) {
	
	int HI, HF, HDif;
	
	scanf("%d %d", &HI, &HF);
	
	if(HF < HI)
	{
		HDif = (HI - HF - 24) * (-1);
	}
	else if(HI == HF)
	{
		HDif = 24;	
	}
	else
	{
		HDif = HF - HI;
	}
	
	printf("O JOGO DUROU %d HORA(S)\n", HDif);
	
	return 0;
}