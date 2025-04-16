/*
  autor: Vinist021;
  data: 28/08/2024;
  nome: Idade em Dias;
*/

#include <stdio.h>

int main(int argc, char *argv[]) {
	
	int tdias, dias, meses, anos;
	
	scanf("%d", &tdias);
	
	anos = tdias / 365;
	meses = (tdias - 365 * anos) / 30;
	dias = (tdias - 365 * anos) - (meses * 30);
	
	printf("%d ano(s)\n", anos);
	printf("%d mes(es)\n", meses);
	printf("%d dia(s)\n", dias);
	
	return 0;
}