#include <stdio.h>
int main(){
    double num1, num2, resultado;
    char operador;

    printf("Digite dois números para a operação: ");
    scanf(" %lf %lf", &num1, &num2);

    printf("Digite o operador desejado (+, -, *, /): ");
    scanf(" %c", &operador);

    switch(operador){
        case '+': 
            resultado = num1 + num2;
            printf("Resultado: %.2lf\n", resultado);
            break;

        case '-':
            resultado = num1 - num2;
            printf("Resultado: %.2lf\n", resultado);
            break;

        case '*':
            resultado = num1 * num2;
            printf("Resultado: %.2lf\n", resultado);
            break;

        case '/':
            if(num2 != 0){
                resultado = num1 / num2;
                printf("Resultado: %.2lf\n", resultado);
            }else{
                printf("Erro! Divisão por 0.\n");
            }
            break;

        default:
            printf("Operador inválido!\n");
    }
    return 0;
}