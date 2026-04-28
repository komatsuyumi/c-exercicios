#include <stdio.h>

typedef enum {OCIOSO, ESTACIONADO, SUBINDO, DESCENDO} EstadoElevador;

int main() {
    
    EstadoElevador elevador;
    int entrada;

    printf("Digite o estado do elevador:\n");
    printf("0 - Ocioso\n");
    printf("1 - Estacionado\n");
    printf("2 - Subindo\n");
    printf("3 - Descendo\n");
    printf("Opcao: ");

    scanf("%d", &entrada);

     elevador = (EstadoElevador)entrada;

    switch(elevador){
        case OCIOSO: printf("O elevador está ocioso, aguardando ser chamado\n | valor: %d\n", OCIOSO);
        break;

        case ESTACIONADO: printf("O elevador está parado\n | valor: %d\n", ESTACIONADO);
        break;

        case SUBINDO: printf("O elevador está subindo\n | valor: %d\n", SUBINDO);
        break;

        case DESCENDO: printf("O elevador está descendo\n | valor: %d\n", DESCENDO);
        break;

        default: printf("Estado inválido!");
        break;
    }

    return 0;
}