import sys

body = False

for linha in sys.stdin:

    linha = linha.rstrip('\n')

    if linha.strip() == "<body>":
        body = True
        continue
    elif linha.strip() == "</body>":
        body = False
        continue

    if body:
        print(linha)
