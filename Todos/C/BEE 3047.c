/*
  autor: Vinist021;
  data: 13/02/2025;
  nome: A idade de Dona Mônica; 
*/

#include<stdio.h>
#include<stdlib.h>

int compara(const void *a, const void *b)
{
   int *N1 = (int *)a;
   int *N2 = (int *)b;
    
    return *N1 - *N2;
}

int main()
{
    
    int M, A, B, C;
    
    scanf("%d %d %d", &M, &A, &B);
    
    C = M - A - B;
    
   int filhos[3] = {A, B, C};
    
   qsort(filhos, 3, sizeof(filhos[0]), compara);
    
   printf("%d\n", filhos[2]);
   
   return 0;
}