import sys

for linha in sys.stdin: #Como ler até EOF usando o sys, isso ajuda em evitar o TLE
    jogadas = linha.strip().split()
    dodo, leo, pepper = jogadas

    vence = { #Definindo que ganha de quem IMPORTANTE
        'tesoura': 'papel',
        'papel': 'pedra',
        'pedra': 'tesoura'
    }

    vitoria_dodo = vence[dodo] == leo and vence[dodo] == pepper #Fazendo a verificação se ganha dos outros
    vitoria_leo = vence[leo] == dodo and vence[leo] == pepper
    vitoria_pepper = vence[pepper] == dodo and vence[pepper] == leo

    if vitoria_dodo:
        print("Os atributos dos monstros vao ser inteligencia, sabedoria...")
    elif vitoria_leo:
        print("Iron Maiden's gonna get you, no matter how far!")
    elif vitoria_pepper:
        print("Urano perdeu algo muito precioso...")
    else:
        print("Putz vei, o Leo ta demorando muito pra jogar...")
