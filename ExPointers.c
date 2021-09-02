#include <stdio.h>

int a, b, *c, *d, *e;

int main()
{
    //Programa A:
    // a = 3;
    // b = -1;
    // c = &a;
    // b += 2;
    // *c = a+2;

    // printf("a: %d b: %d", a, b);

    //Programa B:
    // a = 0; b = 3;
    // c = &a; *c = *c + 1;
    // c = &b;
    // b = b + 4;

    // printf("a: %d b: %d *c: %d", a, b, *c);

    //Programa C:
    // a = 0; b = 3;
    // c = &a; *c = *c + 1;
    // c = &b;
    // b = b + 4;
    // *c = a;

    // printf("a: %d b: %d *c: %d", a, b, *c);

    //Programa D:
    a = 10; b = 3;
    c = &a; d = &b;
    *c /= 2;
    e = c; c = d; d = e;

    printf("*c: %d *d: %d", *c, *d);
    
    return 0;
}