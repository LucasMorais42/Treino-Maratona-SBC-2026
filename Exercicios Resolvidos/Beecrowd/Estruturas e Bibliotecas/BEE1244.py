N = int(input())

for _ in range(N):
    frase = input().split()

    frases_ord = sorted(frase, key=len, reverse=True) #Lambda para ficar com base no tamanho, importante levar!

    print(" ".join(frases_ord)) #LEMBRAR DE USAR

