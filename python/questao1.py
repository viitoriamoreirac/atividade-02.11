def calcular_prestacao_atraso(valor, taxa, tempo):
    prestacao = valor + (valor * (taxa / 100) * tempo)
    return prestacao

valor = float(input("Digite o valor da prestação: "))
taxa = float(input("Digite a taxa de juros (%): "))
tempo = int(input("Digite o tempo de atraso (em meses): "))

prestacao = calcular_prestacao_atraso(valor, taxa, tempo)
print(f"Valor da prestação em atraso: {prestacao:.2f}")