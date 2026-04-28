#include <stdio.h>

int main() {
    int N;
    double S = 0.0;

    printf("Digite um valor para N: ");
    scanf("%d", &N);

    if(N < 0){
        printf("O valor de N deve ser maior que 0!\n");
        return 0;
    }

    int i = 1;
    int j = N; 

    do{
        S = S + (double) i / j;
        i++;
        j--;
    } while(i <= N);
   
    printf("Valor de S = %.2lf \n", S);


    return 0;
}