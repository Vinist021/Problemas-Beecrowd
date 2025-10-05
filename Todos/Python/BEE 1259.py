#   autor: Vinist021;
#   data: 07/01/2025;
#   nome: Pares e Ímpares;

N = int(input())
pares = []
impares = []

for _ in range(N):
    num = int(input())
    pares.append(num) if num % 2 == 0 else impares.append(num)

pares.sort()
impares.sort(reverse=True)

for i in pares:
    print(i)

for j in impares:
    print(j)