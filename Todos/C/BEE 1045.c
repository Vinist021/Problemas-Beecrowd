/*
  autor: Vinist021;
  data: 12/10/2024;
  nome: Tipos de Triângulos;
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct triangulos {	
	double A, B, C, aux;
};

struct triangulos t1;

int main(int argc, char *argv[]) {
	
	scanf("%lf %lf %lf", &t1.A, &t1.B, &t1.C);
	
	if (t1.A < t1.B) {
        t1.aux = t1.A;
        t1.A = t1.B;
        t1.B = t1.aux;
    }
    
    if (t1.A < t1.C) {
        t1.aux = t1.A;
        t1.A = t1.C;
        t1.C = t1.aux;
    }
    
    if (t1.B < t1.C) {
        t1.aux = t1.B;
        t1.B = t1.C;
        t1.C = t1.aux;
    }

	if(t1.A >= (t1.B + t1.C)){
		printf("NAO FORMA TRIANGULO\n");
		exit(0);
	}
	
	if((pow(t1.A, 2)) == (pow(t1.B, 2)) + (pow(t1.C, 2))){
		printf("TRIANGULO RETANGULO\n");
	}	else if((pow(t1.A, 2)) > (pow(t1.B, 2)) + (pow(t1.C, 2))){
			printf("TRIANGULO OBTUSANGULO\n");
		}	else if((pow(t1.A, 2)) < (pow(t1.B, 2)) + (pow(t1.C, 2))){
				printf("TRIANGULO ACUTANGULO\n");
			}
		
	if(t1.A == t1.B && t1.A == t1.C){
		printf("TRIANGULO EQUILATERO\n");
	}	else if(t1.A == t1.B || t1.A == t1.C || t1.B == t1.C){
			printf("TRIANGULO ISOSCELES\n");
		}
		
	return 0;
}