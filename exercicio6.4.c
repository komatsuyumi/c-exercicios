//Escreva um programa em C que leia do teclado um vetor de N caráteres, gere um
//novo vetor de caráteres na ordem inversa do primeiro e imprima os dois vetores.

#include <stdio.h>

int main() {
    int N;

    printf("Digite o valor de N: ");
    scanf("%d", &N);

    char vetor[N]; 
    char invertido[N];

    printf("Digite os carcteres: \n");

    getchar(); // limpa o ENTER

    for(int i = 0; i < N; i++){
        vetor[i] = getchar();
    }

    for(int i = 0; i < N; i++){
        invertido[i] = vetor[N - 1 - i];
    }

    printf("Vetor original: \n");
    for(int i = 0; i < N; i++){
        printf("%c", vetor[i]);
    }

    printf("\nVetor invertido: \n");
    for(int i = 0; i < N; i++){
        printf("%c", invertido[i]);
    }

    printf("\n");


    return 0;
}