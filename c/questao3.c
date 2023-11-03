#include <stdio.h>

int somatorioNPrimeiros(int n) {
    int soma = 0;
    for (int i = 1; i <= n; i++) {
        soma += i;
    }
    return soma;
}

int main() {
    int n;

    printf("Digite um número inteiro N: ");
    scanf("%d", &n);

    int soma = somatorioNPrimeiros(n);
    printf("Somatório dos primeiros %d números: %d\n", n, soma);
    return 0;
}
