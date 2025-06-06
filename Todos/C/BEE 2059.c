/*
  autor: Vinist021;
  data: 27/02/2025;
  nome: Ímpar, Par ou Roubo; 
*/

#include <stdio.h>

int ehPar(int num)
{
    if (num % 2 == 0)
        return 1;
    else 
        return 0;
}

int main()
{
    int J1Paridade, numJ1, numJ2, RouboJ1, AcusacaoJ2;
    int resultParidade, resultIni;
    
    scanf("%d %d %d %d %d", &J1Paridade, &numJ1, &numJ2, &RouboJ1, &AcusacaoJ2);

    //resultado = 1 se par e 0 se impar
    resultParidade = ehPar((numJ1 + numJ2));    

    if(resultParidade == J1Paridade)
    {
        resultIni = 1;
    }
    else
    {
        resultIni = 2;
    }

    if(RouboJ1 == 1 && AcusacaoJ2 == 1)
        printf("Jogador 2 ganha!\n");
    else if(RouboJ1 == 1 && AcusacaoJ2 == 0)
        printf("Jogador 1 ganha!\n");
    else if(RouboJ1 == 0 && AcusacaoJ2 == 1)
        printf("Jogador 1 ganha!\n");
    else
    {
        if(resultIni == 1)
            printf("Jogador 1 ganha!\n");
        else if(resultIni == 2)
            printf("Jogador 2 ganha!\n");
    }

    return 0;
}