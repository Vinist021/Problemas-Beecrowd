/*
  autor: Vinist021;
  data: 11/02/2024;
  nome: Balão de Honra; 
*/

#include<stdio.h>

int main()
{
    
    char letra;
    int num;
    
    scanf("%c", &letra);
    
    num = letra - 'A';
    
    printf("%d\n", num + 1);
    
    return 0;
}

