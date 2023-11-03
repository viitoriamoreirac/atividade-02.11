def comparar_string_lista(string, lista):
    return string in lista

# Solicita ao usuário a lista de nomes
num_nomes = int(input("Digite o número de nomes na lista: "))
nomes = []

for i in range(num_nomes):
    nome = input(f"Digite o nome #{i + 1}: ")
    nomes.append(nome)

string_buscada = input("Digite uma string para buscar na lista de nomes: ")

if comparar_string_lista(string_buscada, nomes):
    print("String encontrada na lista.")
else:
    print("String não encontrada na lista.")