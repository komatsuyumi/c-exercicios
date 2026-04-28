#include <stdio.h>

int main() {
    int N;
    int fatorial = 1; //multiplicação não pode começar com 0

    printf("Digite um valor N para calcular seu fatorial: ");
    scanf("%d", &N);

    if(N < 0){
        printf("Não existe fatorial de número negativo.\n");
        return 0;
    }

    for(int i = 1; i <= N; i++){
        fatorial = fatorial * i;
    }

    printf("Fatorial de %d é igual a %d\n.", N, fatorial);

    return 0;
}