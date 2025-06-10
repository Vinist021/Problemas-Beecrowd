/*
  autor: Vinist021;
  data: 22/02/2025;
  nome: Fibonacci Rápido; 
*/

#include<stdio.h>
#include<math.h>

double fibcalc(int N)
{
    double fib = ((pow((((1 + sqrt(5))/2)), N) - pow((((1- sqrt(5))/2)), N)) / sqrt(5));
    return fib;
}

int main()
{
    int N;

    scanf("%d", &N);

    printf("%.1lf\n", fibcalc(N));

    return 0;
}