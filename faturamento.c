//Considere uma empresa comercial que vende os seus produtos de segunda-feira a sábado. Para cada dia
//da semana, a empresa arrecada um valor (em reais) com as vendas, denominado de faturamento.
//Escreva um programa que registre o faturamento de cada dia de uma semana e, então, determine o
//seguinte:
//1. O faturamento total da semana
//2. O faturamento diário médio
//3. O dia da semana com o menor faturamento
//4. O dia da semana com o maior faturamento
//O programa deve utilizar um vetor para armazenar o faturamento da semana: cada elemento do vetor
//corresponde ao faturamento de um dia.

#include <stdio.h>

int main() {
    float faturamento[6];
    float soma = 0;
    float media;
    int dia_menor = 0;
    int dia_maior = 0;

    for(int i = 0; i < 6; i++){
        printf("Digite o número do faturamento do dia %d: ", i + 1);
        scanf("%f", &faturamento[i]);
    }

    float maior_faturamento = faturamento[0];
    float menor_faturamento = faturamento[0];
    soma = faturamento[0];

    for(int i = 0; i < 6; i++){
        soma = soma + faturamento[i];

        if(faturamento[i] > maior_faturamento){
            maior_faturamento = faturamento[i];
            dia_maior = i;
        }

        if(faturamento[i] < menor_faturamento){
            menor_faturamento = faturamento[i];
            dia_menor = i;
        }
    }

    media = soma / 6;

    printf("\nFaturamento total da semana: %.2f\n", soma);
    printf("Faturamento médio diário: %.2f\n", media);
    printf("Dia com maior faturamento: %d | Valor: %.2f\n", dia_maior, maior_faturamento);
    printf("Dia com menor faturamento: %d | Valor: %.2f\n", dia_menor, menor_faturamento);


    return 0;
}