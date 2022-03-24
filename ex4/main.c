#include <stdio.h>
#include <ctype.h>

int main() {
    char caracter;
    printf("Informe um caracter: \n");
    caracter = getchar();

    if(isalpha(caracter)) {
        caracter = toupper(caracter);
        switch (caracter) {
            case 'A':
                printf("Eh vogal");
                break;
            case 'E':
                printf("Eh vogal");
                break;
            case 'I':
                printf("Eh vogal");
                break;
            case 'O':
                printf("Eh vogal");
                break;
            case 'U':
                printf("Eh vogal");
                break;
            default:
                printf("Eh consoante");
        }
    }
    return 0;
}
