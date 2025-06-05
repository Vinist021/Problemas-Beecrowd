/*
  autor: Vinist021;
  data: 30/12/2024;
  nome: Reservatório de Mel; 
*/

#include <stdio.h>

double calcAltura(double volume, double diametro)
{
	double raio = diametro / 2.0;
	return (volume / (3.14 * raio * raio));
}

double calcArea(double volume, double diametro)
{
	double raio = diametro / 2.0;
	return 3.14 * raio * raio;
}

int main(int argc, char *argv[]) {
	
	double V, D;
	
	while(scanf("%lf %lf", &V, &D) != EOF)
	{
		double altura, area;
		
		altura = calcAltura(V, D);
		area = calcArea(V, D);
		
		printf("ALTURA = %.2lf\n", altura);
		printf("AREA = %.2lf\n", area);
	}
	
	return 0;
}