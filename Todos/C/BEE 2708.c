/*
  autor: Vinist021;
  data: 11/02/2025;
  nome: Turistas no Parque Huacachina; 
*/

#include<stdio.h>
#include<string.h>

int main()
{
    int passageiros, totalpass = 0, viagrest = 0;
    char movimento[7];
    
    while(1)
    {
        scanf("%s", movimento);
    
        if (strcmp(movimento, "ABEND") == 0)
            break;
    
        scanf("%d", &passageiros);
    
        if(strcmp(movimento, "SALIDA") == 0)
        {
            totalpass += passageiros;
            viagrest++;
        }     
        else if(strcmp(movimento, "VUELTA") == 0)
        {
            totalpass -= passageiros;
            viagrest--;
        }    
    }
    
    printf("%d\n", totalpass);
    printf("%d\n", viagrest);
    
    return 0;
}