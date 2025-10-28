import re
import sys

palavras = set()

for linha in sys.stdin:
    linha = linha.strip().lower()
    palavra_linha = re.findall(r'[a-zA-Z]+', linha)

    palavras.update(palavra_linha)

palavra_ord = sorted(palavras)

for p in palavra_ord:
    print(p)