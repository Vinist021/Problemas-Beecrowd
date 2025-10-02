#   autor: Vinist021;
#   data: 10/01/2025;
#   nome: Frequência de Números;

N = int(input())
ntotal = []
numeros = []

for _ in range(N):
    x = int(input())
    numeros.append(x) if x not in ntotal else 0
    ntotal.append(x)

numeros.sort()

for i in numeros:
    print(f'{i} aparece {ntotal.count(i)} vez(es)')
