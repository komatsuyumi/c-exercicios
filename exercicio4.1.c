#include <stdio.h>
int main(){
    int a;
    int b;

    printf("Digite o primeiro número: ");
    scanf("%d", &a);

    printf("Digite o segundo número: ");
    scanf("%d", &b);

    if(a == b){
        printf("Os números devem ser diferentes! Tente novamente.");
    }else{
        if(a<b){
            printf("Ordem crescente: %d %d \n", a, b);
        }else{
            printf("Ordem crescente: %d %d \n", b, a);
        }
    }
    return 0;
}