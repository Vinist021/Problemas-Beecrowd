/*
  autor: Vinist021;
  data: 16/09/2024;
  nome: Idades;
*/

#include <stdio.h>

int main(int argc, char *argv[]) {
	
	double n, somatotal=0, f=0, media;
	
	scanf("%lf", &n);
	
	while(n >= 0){
		
		somatotal += n;
		
		f++;	
		scanf("%lf", &n);	
	}
	
	media = somatotal / f;
	
	printf("%.2lf\n", media);
	
	return 0;
}