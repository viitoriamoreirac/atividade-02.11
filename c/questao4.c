#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int compararStringLista(const char *string, const char *lista[], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        if (strcmp(string, lista[i]) == 0) {
            return 1;
        }
    }
    return 0;
}

int main() {
    int numNomes;

    printf("Digite o número de nomes na lista: ");
    scanf("%d", &numNomes);

    const char *nomes[numNomes];

    for (int i = 0; i < numNomes; i++) {
        nomes[i] = malloc(50);
        printf("Digite o nome #%d: ", i + 1);
        scanf("%s", (char *)nomes[i]);
    }

    char stringBuscada[50];

    printf("Digite uma string para buscar na lista de nomes: ");
    scanf("%s", stringBuscada);

    if (compararStringLista(stringBuscada, nomes, numNomes)) {
        printf("String encontrada na lista.\n");
    } else {
        printf("String não encontrada na lista.\n");
    }

    for (int i = 0; i < numNomes; i++) {
        free((char *)nomes[i]);
    }

    return 0;
}

