#include <stdio.h>
#include <string.h>

/* Objetivo: Estabelecer um conversor para converter números entre Bases 2, 8, 10 e 16
Base 2: 0, 1; (divisões) if (numero % 2 == 0) return 1;
Base 8: 0, 1, 2, 3, 4, 5, 6, 7; (1, 2, 4) %o
Base 10: 0, 1, 2, 3, 4, 5, 6, 7, 8, 9; (potências de 10) %f
Base 16: 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, A(10), B(11), C(12), D(13), E(14), F(15); (1, 2, 4, 8) %x ou %X
*/

float numero;
char conversor[3];

int main()
{
    printf("Insira um numero a ser convertido para outras bases: ");
    scanf("%f%*c", &numero); //entrada do número a ser convertido

    printf("Agora escolha a base para converte-lo (valores aceitaveis: bin, oct, dec, hex): ");
    gets(conversor); //entrada da escolha de conversor

    // int bin() //função conversor binário
    // {
    //     //printf("Seu número em binário é: %d", );
    //     return 0;
    // }

    if (strstr(conversor, "oct")) //conversor octonal
    {
        printf("Seu número em forma octal é: %o", numero);
        return 0;
    }

    else if (strstr(conversor, "dec")) //conversor decimal
    {
        printf("Seu número em decimal é: %f", numero);
        return 0;
    }

    else if (strstr(conversor, "hex")) //conversor hexadecimal
    {
        printf("Seu número em hexadecimal é: %X", numero);
        return 0;
    }

    return 0;
}