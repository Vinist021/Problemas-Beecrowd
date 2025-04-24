/*
  autor: Vinist021;
  data: 16/11/2024;
  nome: Experiências;
*/

#include <stdio.h>

int main(int argc, char *argv[]) {
	
	int N, qtd;
	int tCobaias = 0, tCoelhos = 0, tRatos = 0, tSapos = 0;
	float pCoelhos, pRatos, pSapos;
	char tipo;
	scanf("%d", &N);
	
	for(int i = 0; i < N; i++)
	{
		scanf("%d %c", &qtd, &tipo);
		tCobaias += qtd;
		if(tipo == 'C')
		{
			tCoelhos += qtd;
		}
		if(tipo == 'R')
		{
			tRatos += qtd;
		}
		if(tipo == 'S')
		{
			tSapos += qtd;
		}
		
	}
	
	pCoelhos = (float)tCoelhos / tCobaias * 100;
	pRatos = (float)tRatos / tCobaias * 100;
	pSapos = (float)tSapos / tCobaias * 100;
	
	printf("Total: %d cobaias\n", tCobaias);
	printf("Total de coelhos: %d\n", tCoelhos);
	printf("Total de ratos: %d\n", tRatos);
	printf("Total de sapos: %d\n", tSapos);
	printf("Percentual de coelhos: %.2f %%\n", pCoelhos);
	printf("Percentual de ratos: %.2f %%\n", pRatos);
	printf("Percentual de sapos: %.2f %%\n", pSapos);
	
	return 0;
}