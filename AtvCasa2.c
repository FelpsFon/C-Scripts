#include <stdio.h>
#include <math.h>

int soma(int n)
{
    if (n == 1) return 1;
    return n + soma(n-1);
}

int mult3(int n)
{
    if (n <= 0) return 0;
    else if (n == 1) return 2;
    return (n-1) + 2*n;
}

int multn(int n)
{
    if (n <= 0) return 0;
    else if (n == 1) return 3;
    return 3 * pow(n, n-1);
}

int cumpr(int n)
{
    if (n <= 1) return 0;
    return (n-1) + n*n;
}

int main()
{
    int n = 5;

    printf("Somatorio de %d = %d\n", n, soma(n));
    printf("Posicao %d da sequencia de multiplos de 3 = %d\n", n, mult3(n));
    printf("Posicao %d da sequencia de n = %d\n", n, multn(n));
    printf("Posicao %d de cumprimentos de mao = %d\n", n, cumpr(n));

    return 0;
}