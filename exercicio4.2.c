#include <stdio.h>
int main(){
    char a;
    char b;
    char c;

    printf("Digite três letras distintas: ");
    scanf("%c %c %c", &a, &b, &c);

    if(a == b || b == c || a == c){
        printf("Todas as letras devem ser diferentes!\n");
        return 0;
    }

    if(a < b && a < c){
        if(b < c){
            printf("Ordem alfabética: %c %c %c \n", a, b, c);
        }else{
            printf("Ordem alfabética: %c %c %c \n", a, c, b);
        }
    }
    else if(b < a && b < c){
        if(a < c){
            printf("Ordem alfabética: %c %c %c \n", b, a, c);
        }else{
            printf("Ordem alfabética: %c %c %c \n", b, c, a);
        }
    }
    else{
        if(a < b){
            printf("Ordem alfabética: %c %c %c \n", c, a, b);
        }else{
            printf("Ordem alfabética: %c %c %c \n", c, b, a);
        }
    }
    return 0;
}