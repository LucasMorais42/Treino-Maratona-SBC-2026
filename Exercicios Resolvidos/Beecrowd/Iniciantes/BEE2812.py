N = int(input())

for _ in range(N):
    M = int(input())

    lista = list(map(int, input().split()))

    impar = [x for x in lista if x%2==1]
    
    impar.sort()

    resposta = []

    while impar:
        if impar:
            resposta.append(impar.pop())
        if impar:
            resposta.append(impar.pop(0))
    
    print(' '.join(map(str, resposta)))