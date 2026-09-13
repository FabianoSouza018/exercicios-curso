#include<stdio.h>
#include<string.h>

int main() {
    char senha[20];

    printf("Digite a sua senha:\n");
    scanf("%s", senha);

    // ENQUANTO o strcmp for DIFERENTE de 0 (ou seja, senha incorreta)
    while(strcmp(senha, "tecnico123") != 0) {
        
        // Como o programa só entra aqui se a senha estiver errada,
        // avisamos o usuário e pedimos para digitar de novo
        printf("Senha Incorreta! Tente novamente:\n");
        scanf("%s", senha); // Atualiza a variável para controlar o loop!
    }

    // Se o programa saiu do while, é porque a senha finalmente está certa!
    printf("Acesso Permitido\n");

    return 0;
}
