def gerar_email(nome_completo):
    nome, sobrenome = nome_completo.split()[-1], nome_completo.split()[0]
    print(f"Sr. {sobrenome}, seu email é {nome}@lp.com.br")

nome_completo = input("Digite seu nome completo: ")
gerar_email(nome_completo)