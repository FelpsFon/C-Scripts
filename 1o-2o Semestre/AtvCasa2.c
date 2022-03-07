#include <stdio.h>
#include <math.h>

int soma(int n)
{
    if (n == 1) return 1;
    return soma(n-1) + n;
}

int mult3(int n)
{
    if (n <= 0) return 0;
    else if (n == 1) return 2;
    return mult3(n-1) + 3;    //ANTES: return (n-1) + 2*n;
}

int multn(int n)
{
    if (n <= 0) return 0;
    else if (n == 1) return 3;
    return multn(n-1) * 2;    //ANTES: return 3 * pow(n, n-1);
}

int cumpr(int n)
{
    if (n <= 1) return 0;
    return cumpr(n-1) + (n-1);    //ANTES: return (n-1) + n*n;
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