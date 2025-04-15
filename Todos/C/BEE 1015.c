/*
  autor: Vinist021;
  data: 27/08/2024;
  nome: Distância Entre Dois Pontos;
*/

#include <stdio.h>
#include <math.h>

int main(int argc, char *argv[]) {
	
	float x1, y1, x2, y2, dx, dy, dt;
	
	scanf("%f %f", &x1, &y1);
	scanf("%f %f", &x2, &y2);
	
	dx = pow(x2 - x1, 2);
	
	dy = pow(y2 - y1, 2);
	
	dt = sqrt(dx + dy);
	
	printf("%.4f\n", dt);
	
	return 0;
}