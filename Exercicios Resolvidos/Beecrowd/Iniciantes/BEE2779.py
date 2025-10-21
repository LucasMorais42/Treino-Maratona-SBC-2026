N = int(input())

M = int(input())

quantidade = set()

for _ in range(M):
    figurinha = int(input())

    if figurinha:
        quantidade.add(figurinha)
        
restante = N-len(quantidade)

print(restante)