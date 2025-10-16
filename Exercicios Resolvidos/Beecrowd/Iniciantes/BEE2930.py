E, D = map(int, input().split())

if E>D:
    print("Eu odeio a professora!")
else:
    dias = D-E

    if dias>=3:
        print("Muito bem! Apresenta antes do Natal!")
    else:
        print("Parece o trabalho do meu filho!")

        mensagem = D+2

        if mensagem<=24:
            print("TCC Apresentado!")
        else:
            print("Fail! Entao eh nataaaaal!")