//Escreva um programa em C que leia do teclado uma sequência de N caráteres e
identifique se é ou não um palíndromo. O valor de N deve ser fornecido pelo usuário,
antes da entrada da sequência de caráteres.


#include <stdio.h>

int main() {
    int N;

    printf("Digite o valor de N: ");
    scanf("%d", &N);

    char palavra[N];
    char invertido[N];

    printf("Digite os caracteres da palavra (%d caracteres): ", N);
    getchar();

    for(int i = 0; i < N; i++){
        palavra[i] = getchar();
    }

    for(int i = 0; i < N; i++){
        invertido[i] = palavra[N - 1 - i];
    }

    int palindromo = 1;

    for(int i = 0; i < N; i++){
        if(palavra[i] != invertido[i]){
            palindromo = 0;
            break;
        }
    }

    if(palindromo == 1){
        printf("A palavra digitada é um palíndromo!\n");
    }else{
        printf("A palavra digitada não é um palíndromo!\n");
    }

    printf("Palavra original: \n");
    for(int i = 0; i < N; i++){
        printf("%c", palavra[i]);
    }

    printf("\nPalavra invertida: \n");
    for(int i = 0; i < N; i++){
        printf("%c", invertido[i]);
    }

    printf("\n");

    return 0;
}