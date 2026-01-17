#   autor: Vinist021;
#   data: 14/12/2025;
#   nome: Corvo Contador;

contCaw, somaCodigo = 0, 0

while contCaw < 3:

    codigo = input()
    if codigo == 'caw caw':
        print(somaCodigo)
        somaCodigo = 0
        contCaw += 1
    elif codigo == '---':
        somaCodigo += 0
    elif codigo == '--*':
        somaCodigo += 1
    elif codigo == '-*-':
        somaCodigo += 2
    elif codigo == '-**':
        somaCodigo += 3
    elif codigo == '*--':
        somaCodigo += 4
    elif codigo == '*-*':
        somaCodigo += 5
    elif codigo == '**-':
        somaCodigo += 6
    elif codigo == '***':
        somaCodigo += 7
