#   autor: Vinist021;
#   data: 06/01/2025;
#   nome: Churras no Yuri;

N = int(input())
K = int(input())
L = []

for _ in range(N):
    L.append(int(input()))

L.sort(reverse=True)
tam = len(L)

desempate = L[K-1]

i = 0
classificados = 0

while i < tam and L[i] >= desempate:
    i += 1
    classificados += 1

print(classificados)