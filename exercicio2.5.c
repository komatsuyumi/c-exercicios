#include <stdio.h>
#include <stdbool.h>
int main()
{
    short a = 10;
    double b = 45.9;
    char c = '$';
    bool d = true;

    short *p = &a;
    printf("p: %p\n", p);
    printf("Valor: %d\n\n", *p);
    
    double *q = &b;
    printf("q: %p\n", q);
    printf("Valor: %2f\n\n", *q);

    char *r = &c;
    printf("r: %p\n", r);
    printf("Valor: %c\n\n", *r);

    bool *s = &d;
    printf("s: %p\n", s);
    printf("Valor: %d\n\n", *s);

    
    

return 0;
}

