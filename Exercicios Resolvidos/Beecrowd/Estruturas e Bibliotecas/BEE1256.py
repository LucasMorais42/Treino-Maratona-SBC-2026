N = int(input())

for z in range(N):
    M, C = map(int, input().split())

    chave = list(map(int, input().split()))

    tabela = [[] for _ in range(M)]

    for c in chave:
        i = c%M
        tabela[i].append(c)
    
    for i in range(M):
        print(f"{i} -> ", end="")
        
        for v in tabela[i]:
            print(f"{v} -> ", end="")
        print("\\")
    
    if z<N-1:
        print()