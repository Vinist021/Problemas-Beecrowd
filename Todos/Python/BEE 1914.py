#   autor: Vinist021;
#   data: 16/12/2025;
#   nome: De Quem é a Vez?;

QT = int(input())

i = 0
while i < QT:
    escolhas = input().split()
    nomeJ1, escJ1, nomeJ2, escJ2 = escolhas[0], escolhas[1], escolhas[2], escolhas[3]
    numeros = input().split()
    NJ1, NJ2 = int(numeros[0]), int(numeros[1])

    if (NJ1 + NJ2) % 2 == 0:
        paridade = 'PAR'
    else:
        paridade = 'IMPAR'

    if escJ1 == paridade:
        print(nomeJ1)
    else:
        print(nomeJ2)
    i += 1
