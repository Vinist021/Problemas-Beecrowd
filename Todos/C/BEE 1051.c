/*
  autor: Vinist021;
  data: 11/11/2024;
  nome: Imposto de Renda;
*/

#include <stdio.h>

int main(int argc, char *argv[]) {
	
	float renda, imposto, faixa1=0, faixa2=0, faixa3=0, faixa4=0, total;
	
	scanf("%f", &renda);
	
	if(renda <= 2000.00)
	{
		faixa1 = 0;
	}
	else if(renda <= 3000.00)
	{
		faixa2 = renda - 2000.00;
		faixa1 = renda - faixa2;
		imposto = faixa1 * 0 + faixa2 * 0.08;
	
	}
	else if(renda <= 4500.00)
	{
		faixa3 = renda - 3000.00;
		faixa2 = renda - faixa3 - 2000;
		faixa1 = renda - faixa3 - faixa2;
		imposto = faixa1 * 0 + faixa2 * 0.08 + faixa3 * 0.18;
		
	}
	else
	{
		faixa4 = renda - 4500.00;
		faixa3 = renda - faixa4 - 3000.00;
		faixa2 = renda - faixa4 - faixa3 - 2000.00;
		faixa1 = renda - faixa4 - faixa3 - faixa2;
		imposto = faixa1 * 0 + faixa2 * 0.08 + faixa3 * 0.18 + faixa4 * 0.28;
	}
	
	if(imposto > 0)
	{
		printf("R$ %.2f\n", imposto);
	}
	else
	{
		printf("Isento\n");
	}
    
	return 0;
}