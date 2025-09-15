#   autor: Vinist021;
#   data: 17/02/2025;
#   nome: Grupo de Trabalho do Noel;

N = int(input())

bon, arq, mus, des = 0, 0, 0, 0
for _ in range(N):
    nome, grupo, H = map(str, input().split())
    H = int(H)

    if grupo == 'bonecos':
        bon += H
    if grupo == 'arquitetos':
        arq += H
    if grupo == 'musicos':
        mus += H
    if grupo == 'desenhistas':
        des += H

presentes = ((bon//8) + (arq//4) + (mus//6) + (des//12))

print(presentes)