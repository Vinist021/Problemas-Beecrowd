#   autor: Vinist021;
#   data: 19/12/2024;
#   nome: Ordenando a Lista de Crianças do Papai Noel;

N = int(input())

comportamento, nomes = [], []

i = 0
while i < N:

    dados = input().split()
    comportamento.append(dados[0])
    nomes.append(dados[1])

    i += 1

nomes.sort()
cPositivo = 0
cNegativo = 0

for tipo in comportamento:
    if tipo == '+':
        cPositivo += 1
    elif tipo == '-':
        cNegativo += 1

for pessoa in nomes:
    print(pessoa)

print(f'Se comportaram: {cPositivo} | Nao se comportaram: {cNegativo}')
