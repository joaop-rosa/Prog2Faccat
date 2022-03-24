#include <stdio.h>

int main() {
    int anoNascimento;
    char nomeCompleto[30];

    printf("Informe o seu nome: \n");
    scanf("%s", nomeCompleto);
    getchar();
    printf("Digite seu ano de nascimento: \n");
    scanf("%d", &anoNascimento);
    printf("%s o sua idade eh eh %d",nomeCompleto,2022-anoNascimento);

    return 0;

}
