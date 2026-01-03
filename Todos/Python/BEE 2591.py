#   autor: Vinist021;
#   data: 18/12/2024;
#   nome: HameKameKa;

C = int(input())

i = 0
while i < C:

    val1, val2 = 0, 0

    poder = input()
    pt1 = []
    pt2 = []

    j = 0
    while poder[j] != 'k':
        pt1.append(poder[j])
        j += 1
        
    while j < len(poder):
        pt2.append(poder[j])
        j += 1
        
    for letra in pt1:
        if letra == 'a':
            val1 += 1

    for letra in pt2:
        if letra == 'a':
            val2 += 1

    total = val1 * val2

    print('k' + total * 'a')
    i += 1
