#include <stdio.h>

typedef enum {SEGUNDA, TERCA, QUARTA, QUINTA, SEXTA, SABADO, DOMINGO} DiaSemana;

int main() {
    
    DiaSemana hoje;
    hoje = TERCA;

    switch(hoje){
        case SEGUNDA: printf("Hoje é segunda-feira, valor: %d\n", SEGUNDA);
        break;
        case TERCA: printf("Hoje é terça-feira, valor: %d\n", TERCA);
        break;
        case QUARTA: printf("Hoje é quarta-feira, valor: %d\n", QUARTA);
        break;
        case QUINTA: printf("Hoje é quinta-feira, valor: %d\n", QUINTA);
        break;
        case SEXTA: printf("Hoje é sexta-feira, valor: %d\n", SEXTA);
        break;
        case SABADO: printf("Hoje é sábado, valor: %d\n", SABADO);
        break;
        case DOMINGO: printf("Hoje é domingo, valor: %d\n", DOMINGO);
        break;
    }

    return 0;
}