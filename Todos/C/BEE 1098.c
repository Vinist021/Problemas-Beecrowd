/*
  autor: Vinist021;
  data: 17/11/2024;
  nome: Sequencia IJ 4;
*/

#include <stdio.h>
#include <math.h>

int main(int argc, char *argv[]) {
	
	for(float i = 0; i <= 2.01; i += 0.2)
	{
		for(float j = 0; j < 3; j++)
		{
			i = round((i * 10000)) / 10000;
			if (i > 0 && i < 1)
			{
				printf("I=%.1f J=%.1f\n", i, (1+j+i));
			}
			else if(i > 1 && i < 2)
			{
				printf("I=%.1f J=%.1f\n", i, (1+j+i));
			} 
			else if(i > 2 && i < 3)
			{
				printf("I=%.1f J=%.1f\n", i, (1+j+i));
			}
			else
			{
				printf("I=%.0f J=%.0f\n", i, (1+j+i));
			}	
		}
	}
	
	return 0;
}