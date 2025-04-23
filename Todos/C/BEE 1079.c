/*
  autor: Vinist021;
  data: 05/09/2024;
  nome: Médias Ponderadas;
*/

#include <stdio.h>

int main(int argc, char *argv[]) {
	
	int N;
	double n1, n2, n3, mediapond;

	int i=0;
	
	scanf("%d", &N);
	
	while(i < N){
		scanf("%lf %lf %lf", &n1, &n2, &n3);
		
		mediapond = ((n1 * 2) + (n2 * 3) + (n3 * 5)) / 10.0;
		printf("%.1lf\n", mediapond);
	i++;
	}
    
	return 0;
}