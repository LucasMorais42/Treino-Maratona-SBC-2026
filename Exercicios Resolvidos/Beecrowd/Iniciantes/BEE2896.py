T = int(input())

for _ in range(T):
    N, K = map(int, input().split())

    if N>=K:
        X = N//K
        Y = N%K
        total = X+Y
    else:
        total = N
    
    print(total)