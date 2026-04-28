#include <stdio.h>

const int OCIOSO = 0;
const int ESTACIONADO = 1;
const int SUBINDO = 2;
const int DESCENDO = 3;

int main() {
    
    int estado = OCIOSO;
    
    if(estado == OCIOSO){
        printf("Elevador ocioso: aguardando chamada\n");
    }else if(estado == ESTACIONADO){
        printf("Elevador estacionado\n");
    }else if(estado == SUBINDO){
        printf("Elevador subindo\n");
    }else if(estado == DESCENDO){
        printf("Elevador descendo\n");
    }


    return 0;
}