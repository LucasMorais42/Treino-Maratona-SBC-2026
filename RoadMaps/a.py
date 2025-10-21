n = int(input())


for i in range(n):
    lista = list()
    pares = 0
    frase = input()
    frase.replace('.', '')

    for letra in frase:
        if letra == '<':
            lista.append('<')
        elif letra == '>':
            if(len(lista)>0):
                lista.pop()
                pares+=1
    print(pares)    