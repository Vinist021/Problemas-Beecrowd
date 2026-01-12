#   autor: Vinist021;
#   data: 25/12/2024;
#   nome: A Resposta de Theon;

N = int(input())
numeros = input().split()

for i in range(N):
    if i == 0:
        menor = numeros[i]
        posMenor = i + 1
    elif numeros[i] < menor:
        menor = numeros[i]
        posMenor = i + 1
print(posMenor)
