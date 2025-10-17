N = int(input())

hrsBoneco = 0
hrsArquitetos = 0
hrsMusicos = 0
hrsDesenhistas = 0

for _ in range(N):
    parte = input().split()

    G = parte[1]
    H = int(parte[2])

    if G=="bonecos":
        hrsBoneco+=H
    elif G=="arquitetos":
        hrsArquitetos+=H
    elif G=="musicos":
        hrsMusicos+=H
    else:
        hrsDesenhistas+=H

hrsBoneco = int(hrsBoneco/8)
hrsArquitetos = int(hrsArquitetos/4)
hrsMusicos = int(hrsMusicos/6)
hrsDesenhistas = int(hrsDesenhistas/12)

total = hrsBoneco+hrsArquitetos+hrsDesenhistas+hrsMusicos

print(total)