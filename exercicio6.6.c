//Escreva um programa em C que leia do teclado uma sequência de N de valores
//inteiros e armazene-a em um vetor v. Em seguida, leia do teclado um valor inteiro x e
//procure esse valor no vetor v. O programa deve informar se x foi ou não encontrado em
//v. Se encontrado, deve informar o índice do vetor onde x se encontra. Caso contrário,
//imprime o valor -1.

#include <stdio.h>

int main() {
    int N;

    printf("Digite um valor para N: ");
    scanf("%d", &N);

    int v[N];

    for(int i = 0; i < N; i++){
        printf("Digite o elemento %d: ", i);
        scanf("%d", &v[i]);
    }

    int x;
    printf("Digite o valor a ser procurado no vetor: ");
    scanf("%d", &x);

    int indice = -1; //valor para não encontrado

    for(int i = 0; i < N; i++){
        if(v[i] == x){
            indice = i;
            break;
        }
    }

    if(indice != -1){
        printf("Valor encontrado no vetor v no índice %d\n", indice);
    }else{
        printf("%d\n", indice);
    }

    return 0;
}