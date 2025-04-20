/*
  autor: Vinist021;
  data: 09/11/2024;
  nome: Aumento de Salário;
*/

#include <stdio.h>

int main(int argc, char *argv[]) {
	
	float salario, reajuste, RG, Prcnt, novoSal;
	
	scanf("%f", &salario);
	
	if(salario > 0 && salario <= 400.00)
	{
		reajuste = 0.15;
	}
	else if(salario <= 800.00)
	{
		reajuste = 0.12;	
	}
	else if(salario <= 1200.00)
	{
		reajuste = 0.10;
	}
	else if(salario <= 2000.00)
	{
		reajuste = 0.07;
	}
	else
	{
		reajuste = 0.04;
	}
	
	novoSal = (salario * ((1 + reajuste)));
	RG = salario * reajuste;
	Prcnt = reajuste * 100;
	
	printf("Novo salario: %.2f\n", novoSal);
	printf("Reajuste ganho: %.2f\n", RG);
	printf("Em percentual: %.0f %%\n", Prcnt);
	
	return 0;
}