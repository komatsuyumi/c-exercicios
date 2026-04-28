#include <stdio.h>

enum EstadoElevador{OCIOSO, ESTACIONADO, SUBINDO, DESCENDO};

int main() {
    
    enum EstadoElevador elevador;

    elevador = ESTACIONADO;

    printf("Estado do elevador: %d\n", elevador);

    return 0;
}