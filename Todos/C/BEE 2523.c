/*
  autor: Vinist021;
  data: 24/02/2025;
  nome: A Mensagem de Will; 
*/

#include<stdio.h>

int main()
{
    while(1)
    {
        char letras[27];
        int qtd;

        if(scanf("%s", letras) != 1)
            break;

        scanf("%d", &qtd);
        
        for(int i = 0; i < qtd; i++)
        {
            int pos;
            scanf("%d", &pos);
            printf("%c", letras[pos-1]);
        }
        printf("\n");
        
    }

    return 0;
}