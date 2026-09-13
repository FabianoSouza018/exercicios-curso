#include <stdio.h>
#include <string.h>

int main() {
    char senha[20];

    // while(1) cria um loop infinito controlado
    while(1) {
        printf("Digite a sua senha: ");
        scanf("%s", senha); // Pede a senha DENTRO do loop a cada rodada

        // Seu if/else original agora funciona perfeitamente:
        if (strcmp(senha, "tecnico123") == 0) {
            printf("Acesso Permitido!\n");
            break; // O PULO DO GATO: interrompe o while e sai do loop na hora!
        } else {
            printf("Senha Incorreta! Tente de novo.\n\n");
        }
    }

    printf("Fim do programa.\n");
    return 0;
}
