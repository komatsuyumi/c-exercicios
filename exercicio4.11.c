#include <stdio.h>

int main() {

    int contador = 0;
    for(int n = 0; contador < 30; n++){
        if(n % 2 == 0){
            printf("%d\n", n);
            contador++;
        }
    }
    return 0;
}