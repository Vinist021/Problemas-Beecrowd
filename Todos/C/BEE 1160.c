/*
  autor: Vinist021;
  data: 16/09/2024;
  nome: Crescimento Populacional;
*/

#include <stdio.h>

int main(int argc, char *argv[]) {
	
	int T;
	
	scanf("%d", &T);
	
	int i = 0;
	while(i < T)
	{
		int PA, PB;
		float G1, G2;
		
		scanf("%d %d %f %f", &PA, &PB, &G1, &G2);
		
		int tempo = 0;
		while(PA <= PB)
		{
			PA = (int)(PA * (1 + (G1 / 100.0)));
			PB = (int)(PB * (1 + (G2 / 100.0)));
			
			tempo++;
			
			if(tempo > 100)
			{
				printf("Mais de 1 seculo.\n");
				break;
			}
		}
		
		if(tempo <= 100)
		{
			printf("%d anos.\n", tempo);
		}
		
		i++;
	}
	
	return 0;
}