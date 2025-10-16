N = int(input())

letras = set("abcdefghijklmnopqrstuvwxyz") #Set para poder usar intersecção

for _ in range(N):
    
    frase = input().strip().lower()
    contador = set(frase) & letras #Evita outro for e só pega letra q tem em ambos
    
    if len(contador)==26:
        print("frase completa")
    elif len(contador)>=13:
        print("frase quase completa")
    else:
        print("frase mal elaborada")
    
