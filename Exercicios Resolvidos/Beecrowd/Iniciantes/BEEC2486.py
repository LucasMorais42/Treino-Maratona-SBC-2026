suco = {
    "suco de laranja": 120,
    "morango fresco": 85,
    "mamao": 85,
    "goiaba vermelha": 70,
    "manga": 56,
    "laranja": 50,
    "brocolis": 34
}

while True:
    T = int(input())

    if T==0:
        break

    mg = 0

    for _ in range(T):
        linha = input() #Por ser valor diferente recebo em input depois converto, LEMBRANDO estou fazendo isso pois recebo suco de laranja e acaba dando conflito caso defina 2 variáveis
        partes = linha.split() #Divindo para ter cada variável
    
        quantidade = int(partes[0]) #Definindo as partes
        tipo = " ".join(partes[1:])

        mg+= quantidade * suco[tipo] #Sem mistério, estou acessando o dicionário

    if mg>130:
        valor = mg-130
        print(f'Menos {valor} mg')
    elif mg<110:
        valor = 110-mg
        print(f'Mais {valor} mg')
    else:
        print(f'{mg} mg')