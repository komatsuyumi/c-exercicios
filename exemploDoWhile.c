#include <stdio.h>

int main() {
    char letra = 'a';
    do{
        putchar(letra);
        letra++;
    }while(letra <= 'z');

    return 0;
}