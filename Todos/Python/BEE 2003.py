#   autor: Vinist021;
#   data: 29/12/2024;
#   nome: Domingo de Manhã;

try:
    while True:
        horas, minutos = map(int, input().split(':'))

        if horas >= 7:
            atraso = ((horas - 7) * 60) + minutos
        else:
            atraso = 0

        print(f'Atraso maximo: {atraso}')
except EOFError:
    exit(0)