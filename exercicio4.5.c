#include <stdio.h>
#include <math.h>

int main() {
    double pi = 3.1416, volume;
    for(int r = 0; r <= 6; r = r + 2){
        volume = (4.0/3.0) * pi * pow(r, 3);
        printf("%d %.2lf\n", r, volume);
    }


    return 0;
}