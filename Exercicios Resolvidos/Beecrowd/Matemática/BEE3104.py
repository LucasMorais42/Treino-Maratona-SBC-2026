A = input().strip() #Trabalhando com string pq pode ser muito grande o valor
B = int(input().strip())

mod = 0

for numero in A:
    mod = (mod*10 + int(numero)) % B

print(mod)

#Código muito lento, deu accepted mas é melhor usar C++ por exemplo