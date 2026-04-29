#include <stdio.h>
#include <string.h>

typedef struct{
    char nome[50];
    int ano_nasc;
    int altura;
}Pessoa;

int main() {
    Pessoa pessoas[4];
    for(int i = 0; i < 4; i++){

        printf("Pessoa %d, digite seu nome: ", i + 1);
        scanf("%s", pessoas[i].nome);

        printf("Pessoa %d, digite seu ano de nascimento: ", i + 1);
        scanf("%d", &pessoas[i].ano_nasc);

        printf("Pessoa %d, digite sua altura: ", i + 1);
        scanf("%d", &pessoas[i].altura);
    }

    for(int i = 0; i < 4; i++){

        printf("%s\n", pessoas[i].nome);
        printf("%d\n", pessoas[i].ano_nasc);
        printf("%d\n", pessoas[i].altura);
    }
    
    return 0;
}