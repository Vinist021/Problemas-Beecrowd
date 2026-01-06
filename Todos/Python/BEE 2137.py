#   autor: Vinist021;
#   data: 17/12/2024;
#   nome: A Biblioteca do Senhor Severino;

try:
    while True:
        N = int(input())
        L = []

        i = 0
        while i < N:
            L.append(input())

            i += 1

        L.sort()
        for i in L:
            print(i)

except EOFError:
    exit(0)
