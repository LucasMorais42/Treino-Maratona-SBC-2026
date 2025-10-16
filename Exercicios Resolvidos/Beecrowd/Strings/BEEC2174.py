TOTAL_POMEKONS = 151

n = int(input())

capturados = set()

for _ in range(n):
    nome = input().strip()
    capturados.add(nome)

faltam = TOTAL_POMEKONS - len(capturados)

print(f"Falta(m) {faltam} pomekon(s).")
