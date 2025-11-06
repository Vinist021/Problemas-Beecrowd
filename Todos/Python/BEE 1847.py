#   autor: Vinist021;
#   data: 25/12/2025;
#   nome: Bem-vindos e Bem-vindas ao Inverno!;

A, B, C = map(int, input().split())
PS = B - A
ST = C - B

if PS < 0 and ST >= 0:
    print(':)')
elif PS > 0 and ST <= 0:
    print(':(')
elif PS > 0 and ST > 0 and ST < PS:
    print(':(')
elif PS > 0 and ST > 0 and ST >= PS:
    print(':)')
elif PS < 0 and ST < 0 and ST > PS:
    print(':)')
elif PS < 0 and ST < 0 and ST <= PS:
    print(':(')
elif PS == 0 and ST > 0:
    print(':)')
else:
    print(':(')
