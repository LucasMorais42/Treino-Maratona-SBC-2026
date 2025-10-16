N = int(input())

for _ in range(N):
    conta = input().strip()

    if conta == "P=NP":
        print("skipped")
    else:
        a, b = map(int, conta.split('+'))
        print(a + b)
