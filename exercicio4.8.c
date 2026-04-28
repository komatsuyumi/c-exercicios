#include <stdio.h>

int main() {
    int N;
    double H = 0.0; 

    printf("Digite o valor de N: ");

    scanf("%d", &N);

    if (N <= 0) {
        printf("Erro: N deve ser maior que zero!\n");
        return 0;
    }

    for(int i = 1; i <= N; i++){
        H = H + (1.0 / i);
    }

    printf("Valor de H: %.2lf\n", H);

    return 0;
}