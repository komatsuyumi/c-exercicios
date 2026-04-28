#include <stdio.h>
#include <math.h>

int main(){
    double pi = 3.1416;
    int r = 0;
    double volume;

    while(r <= 6){
        volume = (4.0/3) * pi * pow(r, 3);
        printf("Raio: %d | Volume: %.2lf\n", r, volume);
        r = r + 2;
    }
    return 0;
}