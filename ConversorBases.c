#include <stdio.h>
#include <math.h>

/* Objetivo: Estabelecer um conversor para converter números entre Bases 2, 8, 10 e 16
Base 2: 0, 1; (divisões)
Base 8: 0, 1, 2, 3, 4, 5, 6, 7; (1, 2, 4)
Base 10: 0, 1, 2, 3, 4, 5, 6, 7, 8, 9; (potências de 10)
Base 16: 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, A(10), B(11), C(12), D(13), E(14), F(15); (1, 2, 4, 8)
*/

char numero[16];
char conversor[3];

int main()
{
    printf("Insira um numero a ser convertido para outras bases: ");
    gets(numero); //entrada do número a ser convertido

    printf("Agora escolha a base para converte-lo (valores aceitaveis: bin, oct, dec, hex): ");
    gets(conversor); //entrada da escolha de conversor

    int bin() //função conversor binário
    {
        
        return 0;
    }

    int oct() //função conversor octonal
    {
        
        return 0;
    }

    int dec() //função conversor decimal
    {
        
        return 0;
    }

    int hex() //função conversor hexadecimal
    {
        
        return 0;
    }

    printf("%s | %s", numero, conversor); //saída
    return 0;
}