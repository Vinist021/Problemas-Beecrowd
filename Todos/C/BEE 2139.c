/*
  autor: Vinist021;
  data: 02/01/2025;
  nome: Natal de Pedrinho; 
*/

#include <stdio.h>

int main(int argc, char *argv[]) {
	
	int mes, dia;
	
	while(scanf("%d %d", &mes, &dia) != EOF)
	{	
		if(mes == 12 && dia == 24)
			printf("E vespera de natal!\n");
		else if(mes == 12 && dia == 25)
			printf("E natal!\n");
		else if (mes == 12 && dia > 25)
			printf("Ja passou!\n");
		else
		{
			int totalDias = 366;
			switch (mes){
				case 12:
					totalDias -= 30;	
				case 11:
					totalDias -= 31;
				case 10:
					totalDias -= 30;
				case 9:
					totalDias -= 31;
				case 8:
					totalDias -= 31;
				case 7:
					totalDias -= 30;
				case 6:
					totalDias -= 31;
				case 5:
					totalDias -= 30;
				case 4:
					totalDias -= 31;
				case 3:
					totalDias -= 29;
				case 2:
					totalDias -= 31;
				case 1:
					totalDias -= 6;
					totalDias -= dia;
					printf("Faltam %d dias para o natal!\n", totalDias);
				break;
			}
		}		
	}

	return 0;
}