#include <stdio.h>

float calcularPrestacaoAtraso(float valor, float taxa, int tempo) {
    float prestacao = valor + (valor * (taxa / 100) * tempo);
    return prestacao;
}

int main() {
    float valor, taxa;
    int tempo;

    printf("Digite o valor da prestação: ");
    scanf("%f", &valor);
    printf("Digite a taxa de juros: ");
    scanf("%f", &taxa);
    printf("Digite o tempo de atraso (em meses): ");
    scanf("%d", &tempo);

    float prestacao = calcularPrestacaoAtraso(valor, taxa, tempo);
    printf("Valor da prestação em atraso: %.2f\n", prestacao);
    return 0;
}