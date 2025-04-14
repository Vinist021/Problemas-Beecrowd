/*
  autor: Vinist021;
  data: 25/08/2024;
  nome: Salário;
*/

#include <stdio.h>

int main(int argc, char *argv[]) {
	
	int nf, qth;
	float vh, sal;
	
	scanf("%d", &nf);
	
	scanf("%d", &qth);
	
	scanf("%f", &vh);
	
	sal = qth * vh;
	
	printf("NUMBER = %d\n", nf);
	printf("SALARY = U$ %.2f\n", sal);
	
	return 0;
}