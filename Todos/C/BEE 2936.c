/*
  autor: Vinist021;
  data: 10/02/2025;
  nome: Quanta Mandioca?; 
*/

#include <stdio.h>

int main() {
	
	int Cur, Boi, Bot, Map, Iar;
	int result;
	
	scanf("%d %d %d %d %d", &Cur, &Boi, &Bot, &Map, &Iar);
	
	Cur = Cur * 300;
	Boi = Boi * 1500;
	Bot = Bot * 600;
	Map = Map * 1000;
	Iar = Iar * 150;
	
	result = Cur + Boi + Bot + Map + Iar + 225;
	
	printf("%d\n", result);
	
	return 0;
    
}