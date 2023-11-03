def somatorio_n_primeiros(n):
    soma = sum(range(1, n + 1))
    return soma

n = int(input("Digite um número inteiro N: "))
soma = somatorio_n_primeiros(n)
print(f"Somatório dos primeiros {n} números: {soma}")