//Escreva um programa em C que leia do teclado uma sequência de N valores
//inteiros e armazene-a em um vetor v. Em seguida, gere um novo vetor de inteiros com
//a mesma capacidade e os mesmos elementos de v, porém em ordem crescente.

#include <stdio.h>

int main() {

    int N;

    printf("Digite o valor de N: ");
    scanf("%d", &N);

    int v[N];
    int c[N];

    for(int i = 0; i < N; i++){
        printf("Digite o valor pro elemento %d: ", i);
        scanf("%d", &v[i]);
    }

    for(int i = 0; i < N; i++){
        c[i] = v[i];
    }

    for(int i = 0; i < N; i++){
        for(int j = 0; j < N - 1; j++){
            if(c[j] > c[j + 1]){
                int troca = c[j];
                c[j] = c[j + 1];
                c[j + 1] = troca;
            }
        }
    }
    
    return 0;
}