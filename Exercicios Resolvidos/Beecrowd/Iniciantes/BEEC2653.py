import sys

quantidade = set()

for linha in sys.stdin:
    joia = linha.strip()
    
    if joia:
        quantidade.add(joia) #Verificando e contando diferentes

print(len(quantidade))