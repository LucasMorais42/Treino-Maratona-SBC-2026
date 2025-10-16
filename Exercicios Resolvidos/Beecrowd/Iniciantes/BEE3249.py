N = int(input())

contadorVitoria = 0

for _ in range(N):
    K = input().strip()

    encontrou = False #Importante lembrar de usar para verificar se existe algo que queremos achar

    for i in range(len(K)-1): #Garantia que não vai passar do limite
        if K[i]=='C' and K[i+1]=='D': 
            encontrou = True #A partir do momento que encontrar CD já para e não executa mais
            break
    
    if not encontrou:
        contadorVitoria+=1

print(contadorVitoria)