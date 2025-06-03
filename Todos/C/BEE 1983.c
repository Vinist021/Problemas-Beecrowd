/*
  autor: Vinist021;
  data: 28/12/2024;
  nome: O Escolhido; 
*/

#include <stdio.h>

int main(int argc, char *argv[]) {
	
	int N, posMaior;

	scanf("%d", &N);
	float dadoAluno[N][2];
	float maiorNota;
	
	int i = 0;
	while(i < N)
	{
		scanf("%f %f", &dadoAluno[i][0], &dadoAluno[i][1]);
		
		if(i == 0)
		{
			maiorNota = dadoAluno[i][1];
			posMaior = i;	
		}
		else if(dadoAluno[i][1] > maiorNota)
		{
			maiorNota = dadoAluno[i][1];
			posMaior = i;
		}
		i++;
	}

	if(dadoAluno[posMaior][1] >= 8.0)
	{
		printf("%.0f\n", dadoAluno[posMaior][0]);
	}
	else
	{
		printf("Minimum note not reached\n");
	}
	
	return 0;
}