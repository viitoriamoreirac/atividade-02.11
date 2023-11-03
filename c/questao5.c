#include <stdio.h>
#include <string.h>

void gerarEmail(char *nomeCompleto) {
    char *sobrenome = strrchr(nomeCompleto, ' ');
    if (sobrenome != NULL) {
        *sobrenome = '\0'; 
        printf("Sr. %s, seu email é %s@lp.com.br\n", nomeCompleto, nomeCompleto);
    } else {
        printf("Nome incompleto.\n");
    }
}

int main() {
    char nomeCompleto[100];
    printf("Digite seu nome completo: ");
    fgets(nomeCompleto, sizeof(nomeCompleto), stdin);
    nomeCompleto[strcspn(nomeCompleto, "\n")] = '\0'; 
    gerarEmail(nomeCompleto);
    return 0;
}
