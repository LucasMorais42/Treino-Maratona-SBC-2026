N = int(input())

for i in range(1, N+1):
    linha = input().split()
    valor = linha[0]
    base = linha[1]

    if base=="bin":
        numero = int(valor, 2)
        decimal = str(numero)
        hexadecimal = format(numero, 'x')
        print(f'Case {i}:\n{decimal} dec\n{hexadecimal} hex')
    
    elif base=="dec":
        numero = int(valor)
        hexadecimal = format(numero, 'x')
        binario = format(numero, 'b')
        print(f'Case {i}:\n{hexadecimal} hex\n{binario} bin')
    
    elif base=="hex":
        numero = int(valor, 16)
        decimal = str(numero)
        binario = format(numero, 'b')
        print(f'Case {i}:\n{decimal} dec\n{binario} bin')   
    
    print()
    