#   autor: Vinist021;
#   data: 23/12/2024;
#   nome: Bazinga!;


T = int(input())

i = 0
while i < T:

    j1, j2 = input().split()

    if j1 == j2:
        resultado = 'De novo'
    elif j1 == 'tesoura' and j2 == 'papel':
        resultado = 'Bazinga'
    elif j1 == 'papel' and j2 == 'pedra':
        resultado = 'Bazinga'
    elif j1 == 'pedra' and j2 == 'lagarto':
        resultado = 'Bazinga'
    elif j1 == 'lagarto' and j2 == 'Spock':
        resultado = 'Bazinga'
    elif j1 == 'Spock' and j2 == 'tesoura':
        resultado = 'Bazinga'
    elif j1 == 'tesoura' and j2 == 'lagarto':
        resultado = 'Bazinga'
    elif j1 == 'lagarto' and j2 == 'papel':
        resultado = 'Bazinga'
    elif j1 == 'papel' and j2 == 'Spock':
        resultado = 'Bazinga'
    elif j1 == 'Spock' and j2 == 'pedra':
        resultado = 'Bazinga'
    elif j1 == 'pedra' and j2 == 'tesoura':
        resultado = 'Bazinga'
    else:
        resultado = 'Raj trapaceou'

    print(f'Caso #{i+1}: {resultado}!')

    i += 1
