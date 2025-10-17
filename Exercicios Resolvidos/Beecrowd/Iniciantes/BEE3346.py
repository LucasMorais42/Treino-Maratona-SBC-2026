ano1, ano2 = map(float, input().split())

resultado = (1 + ano1/100) * (1 + ano2/100) #Fazendo a conta para converter em valor decimal tipo -4 vira 0.96
pib = (resultado-1) * 100

print(f'{pib:.6f}')