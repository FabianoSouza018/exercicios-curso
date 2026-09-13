#include<stdio.h>
#include<string.h>

int main() {

char senha[20];

printf("Digite a sua senha\n");
scanf("%s", senha);

// strcmp compara a senha digitada com o texto "tecnico123"
// Se o resultado for igual a 0, significa que as senhas são iguais

if(strcmp(senha, "tecnico123") == 0) {
    printf(" Acesso Permitido ");
    
} else {
    printf(" Senha Incorreta ");
    
}

return 0;
}