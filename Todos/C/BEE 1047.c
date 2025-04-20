/*
  autor: Vinist021;
  data: 28/10/2024;
  nome: Tempo de Jogo com Minutos;
*/

#include <stdio.h>

int main(int argc, char *argv[]) {
	
	int HI, MI, HF, MF, TT, MT, HT;
	
	scanf("%d %d %d %d", &HI, &MI, &HF, &MF);
	
	HI = HI * 60;
	HF = HF * 60;
	
	TT = (HF - HI) + (MF - MI);
	
	if(TT > 0){
		MT = TT % 60;
		HT = TT / 60;
	}	else if (TT < 0){
			TT = 1440 + TT;
			MT = TT % 60;
			HT = TT / 60;
		}	else{
				HT = 24;
				MT = 0;
			}
	
	printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", HT, MT);
	
	return 0;
}