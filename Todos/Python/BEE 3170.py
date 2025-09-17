#   autor: Vinist021;
#   data: 16/02/2025;
#   nome: Bolinhas de Natal;

B = int(input())
G = int(input())

nec = G // 2
qtFaltam = nec - B

if qtFaltam > 0:
    print(f'Faltam {qtFaltam} bolinha(s)')
else:
    print('Amelia tem todas bolinhas!')