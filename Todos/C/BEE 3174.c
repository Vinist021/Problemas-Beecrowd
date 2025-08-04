/*
  autor: Vinist021;
  data: 17/02/2025;
  nome: Grupo de Trabalho do Noel;
*/

#include<stdio.h>
#include<string.h>

int main()
{
    int N, H, presentes = 0;
    int bon = 0, arq = 0, mus = 0, des = 0;
    char nome[30], grupo[30];

    scanf("%d", &N);

    for(int i = 0; i < N; i++)
    {
        scanf("%s %s %d", nome, grupo, &H);

        if(strcmp(grupo, "bonecos") == 0)
            bon += H;
        else if(strcmp(grupo, "arquitetos") == 0)
            arq += H;
        else if(strcmp(grupo, "musicos") == 0)
            mus += H;
        else if(strcmp(grupo, "desenhistas") == 0)
            des += H;
   }

    presentes = ((bon/8) + (arq/4) + (mus/6) + (des/12));

    printf("%d\n", presentes);

    return 0;
}