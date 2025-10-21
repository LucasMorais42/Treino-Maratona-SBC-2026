X = input().split('.')

inicio = X[0]
fim = X[1]

if fim[0]=='0':
    fim = fim[1::]



print(f'{fim}.{inicio}')