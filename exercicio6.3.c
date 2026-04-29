//Escreva um programa em C que leia do teclado um vetor de N elementos reais,
//imprima esse vetor e, depois, imprima a soma dos elementos equidistantes, isto é,
//imprime a soma do primeiro com último, depois a soma do segundo com o penúltimo,
//e assim por diante.

#include <stdio.h>

int main() {
    int N;

    printf("Digite o valor N que é o tamanho do vetor: ");
    scanf("%d", &N);

    float vetor[N];

    for(int i = 0; i < N; i++){
        printf("Digite o valor para o %d elemento do vetor: ", i + 1);
        scanf("%f", &vetor[i]);
    }

    printf("Vetor: \n");
    for (int i = 0; i < N; i++) {
        printf("%.2f ", vetor[i]);
    }

    //soma dos pares equidistantes
    float total = 0;
    for(int i = 0, j = N - 1; i < N / 2; i++, j--){
        float soma = vetor[i] + vetor[j];
        printf("vetor[%d] + vetor[%d] = %.2f\n", i, j, soma);
        total = total + soma;
    }

    printf("Valor soma total = %.2f\n", total);


    return 0;
}