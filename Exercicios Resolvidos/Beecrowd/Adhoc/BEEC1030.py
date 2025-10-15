def jose(n,k):
    position = 0
    for i in range(1,n+1):
        position = (position + k) % i

    return position + 1

tst = int(input())

for i in range(tst):
    n,k = map(int, input().split())
    print(f"Case {i + 1}: {jose(n,k)}")

