N = int(input())

quantHobbit = 0
quantHuman = 0
quantElfo = 0
quantAnao = 0
quantMago = 0

for _ in range(N):
    linha = input().split()

    raca = linha[1]

    if raca=="X":
        quantHobbit+=1
    elif raca=="M":
        quantMago+=1
    elif raca=="H":
        quantHuman+=1
    elif raca=="E":
        quantElfo+=1
    else:
        quantAnao+=1

print(f'{quantHobbit} Hobbit(s)')
print(f'{quantHuman} Humano(s)')
print(f'{quantElfo} Elfo(s)')
print(f'{quantAnao} Anao(oes)')
print(f'{quantMago} Mago(s)')
