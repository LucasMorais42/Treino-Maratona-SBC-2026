N = int(input())

for _ in range(N):
    pontJoao = 0
    pontMaria = 0

    for _ in range(3):
        X, D = map(int, input().split())
        pontJoao+=X*D
    
    for _ in range(3):
        X, D = map(int, input().split())
        pontMaria+=X*D

    if pontJoao>pontMaria:
        print("JOAO")
    elif pontJoao<pontMaria:
        print("MARIA")
    else:
        print("EMPATE")