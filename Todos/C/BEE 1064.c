/*
  autor: Vinist021;
  data: 12/11/2024;
  nome: Positivos e Média;
*/

#include <stdio.h>

int main(int argc, char *argv[]) {
	
	float n1, n2, n3, n4, n5, n6, media, somapositivos = 0;
	int cont=0;
	
	scanf("%f %f %f %f %f %f", &n1, &n2, &n3, &n4, &n5, &n6);
	
	if(n1 > 0)
	{
		cont++;
		somapositivos += n1;
	}
	if(n2 > 0)
	{
		cont++;
		somapositivos += n2;
	}
	if(n3 > 0)
	{
		cont++;
		somapositivos += n3;
	}
	if(n4 > 0)
	{
		cont++;
		somapositivos += n4;
	}
	if(n5 > 0)
	{
		cont++;
		somapositivos += n5;
	}
	if(n6 > 0)
	{
		cont++;
		somapositivos += n6;
	}
		
	media = somapositivos / cont;
		
	printf("%d valores positivos\n", cont);
	printf("%.1f\n", media);
	
	return 0;
}