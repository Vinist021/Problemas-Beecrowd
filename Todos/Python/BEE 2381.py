#   autor: Vinist021;
#   data: 20/12/2024;
#   nome: Lista de Chamada;

N, K = map(int, input().split())
nomes = []

i = 0
while i < N:

    nomes.append(input())

    i += 1

nomes.sort()
print(nomes[K-1])
