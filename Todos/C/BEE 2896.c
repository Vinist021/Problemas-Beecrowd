/*
  autor: Vinist021;
  data: 20/08/2024;
  nome: Aproveite a Oferta; 
*/

#include <stdio.h>

int main(int argc, char *argv[]) {
	
	int T, N, K;
	
	scanf("%d", &T);
	int Nx[T], Kx[T], Gx[T];
	
	for(int x=0; x<T; x++){
		scanf("%d %d", &Nx[x], &Kx[x]);	
	}
	
	for(int x=0; x<T; x++){
		if(Nx[x] > Kx[x]){
			Gx[x] = ((Nx[x] % Kx[x]) + (Nx[x] / Kx[x]));
			 
		}	else if(Nx[x] == Kx[x]){
				Gx[x] = (Nx[x] / Kx[x]);
			
			}	else if(Nx[x] < Kx[x]){
					Gx[x] = Nx[x];
				}	 
	
	}
	
	for(int x=0; x<T; x++){
		printf("%d\n", Gx[x]);
	}
	
	return 0;
}
