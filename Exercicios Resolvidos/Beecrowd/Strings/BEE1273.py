validacao = True #Garantia para que não pule linha na última

while True:
    N = int(input())

    if N==0:
        break

    palavras = [input() for _ in range(N)] #Lembrar de usar isso pq agiliza na hora de digitar, importante para maratonas
    maiorPalavra = max(len(palavra) for palavra in palavras)
    
    if not validacao:
        print()
    validacao = False

    for p in palavras:
        print(p.rjust(maiorPalavra))