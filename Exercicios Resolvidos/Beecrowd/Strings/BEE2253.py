while True:
    try:
        senha = input().strip()

        if 6<=len(senha)<=32:
            maiuscula = any(letra.isupper() for letra in senha) #Vou ir letra por letra vendo se acho alguma maiuscula, faço a mesma coisa para os demais
            minuscula = any(letra.islower() for letra in senha) #Importante lembrar todos os . disponíveis, são bem úteis
            digito = any(letra.isdigit() for letra in senha)
            letra_numero = all(letra.isalnum() for letra in senha)

            if maiuscula and minuscula and digito and letra_numero:
                print("Senha valida.")
            else:
                print("Senha invalida.")
        else:
            print("Senha invalida.")

    except EOFError:
        break    