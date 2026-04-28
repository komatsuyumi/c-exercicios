#include <stdio.h>
#include <math.h>

int main() {
    double pi = 3.1416, volume;
    int r = 0;

    do{
        volume = (4.0/3.0) * pi * pow(r, 3);
        printf("Raio: %d | Volume: %.2lf\n", r, volume);
        r = r + 2;
    }while(r <= 6);
    return 0;
}