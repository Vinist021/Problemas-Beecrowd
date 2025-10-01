#   autor: Vinist021;
#   data: 26/01/2025;
#   nome: Triângulo;

import itertools

def verificatriangulo(a, b, c):
    return a + b > c and a + c > b and b + c > a

A, B, C, D = map(int, input().split())

tamanhos = [A, B, C, D]

for comb in itertools.combinations(tamanhos, 3):
    if verificatriangulo(*comb) == True:
        print('S')
        break
else:
    print('N')
