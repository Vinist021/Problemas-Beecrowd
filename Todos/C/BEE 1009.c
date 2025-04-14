/*
  autor: Vinist021;
  data: 25/08/2024;
  nome: Salário com Bônus;
*/

#include <stdio.h>

int main(int argc, char *argv[]) {
	
	char nome[100];
	double sfix, tvend, vfinal;
	
	scanf("%s", &nome);
	
	scanf("%lf", &sfix);
	
	scanf("%lf", &tvend);
	
	vfinal = sfix + (0.15 * tvend);
	
	printf("TOTAL = R$ %.2lf\n", vfinal);
	
	return 0;
}