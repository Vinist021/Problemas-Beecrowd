#   autor: Vinist021;
#   data: 19/12/2024;
#   nome: Problema com a Calculadora;

import re

N = int(input())

i = 0
while i < N:

    palavra = input()

    numeros = re.findall(r'\d+', palavra)

    soma = 0
    for num in numeros:
        soma += int(num)

    print(soma)

    i += 1
    