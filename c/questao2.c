#include <stdio.h>

void converterTemperatura(float kelvin) {
    float celsius = kelvin - 273.15;
    float fahrenheit = (kelvin - 273.15) * 9/5 + 32;
    printf("Temperatura em Celsius: %.2f\n", celsius);
    printf("Temperatura em Fahrenheit: %.2f\n", fahrenheit);
}

int main() {
    float temperaturaKelvin;

    printf("Digite a temperatura em Kelvin: ");
    scanf("%f", &temperaturaKelvin);

    converterTemperatura(temperaturaKelvin);
    return 0;
}
