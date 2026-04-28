#include <stdio.h>

int main() {
    int A[5];
    int B[5];
    int S[5];

    for(int i = 0; i < 5; i++){
        printf("Digite um valor para o elemento %d do vetor A: ", i + 1);
        scanf("%d", &A[i]);
    
    }

    for(int i = 0; i < 5; i++){
        printf("Digite um valor para o elemento %d do vetor B: ", i + 1);
        scanf("%d", &B[i]);
    }

    for(int i = 0; i < 5; i++){
        S[i] = A[i] + B[i];
    }

    printf("\n| Vetor A: ");
    for(int i = 0; i < 5; i++){
        printf("%d", A[i]);
    }

    printf("\n| Vetor B: ");
    for(int i = 0; i < 5; i++){
        printf("%d", B[i]);
    }

    printf("\n| Vetor S:");
    for(int i = 0; i < 5; i++){
        printf("%d", S[i]);
    }

    return 0;
}