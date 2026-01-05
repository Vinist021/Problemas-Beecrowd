#   autor: Vinist021;
#   data: 17/12/2024;
#   nome: Sequência Espelho;

def inverteString(string):

    abc = str(string)

    inversa = ''
    for i in range(len(abc)-1, -1, -1):
        inversa += abc[i]
    return inversa


C = int(input())

i = 0
while i < C:

    L = []
    a, b = map(int, input().split())

    for num in range(a, (b+1)):
        print(num, end='')
        L.append(str(num))

    L.reverse()

    for num in L:
        print(inverteString(num), end='')
    print()

    i += 1
