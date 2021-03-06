#include <stdio.h>

int main()
{
    /*Dado o programa abaixo, considere que n é inicializado com um inteiro maior ou igual a 0 e v[n] é inicializado com dados fictícios.
    Escreva UTILIZANDO APENAS NOTAÇÃO DE PONTEIROS um algoritmo que percorra o vetor v e armazene o endereço de memória do menor elemento do vetor v, no ponteiro 'resposta'.
    Em seguida, utilizando o ponteiro 'resposta', imprima na tela o endereço de memória encontrado e o seu valor. */

    int n = 3;
    int v[n] = {2, 1, 3};

    int *resposta;

    for (resposta = v; resposta < (v + n); resposta++) //um algoritmo que percorra o vetor v
    {
        int i = i++; printf("endereço: %0p | valor: %d\n", resposta, *resposta);
        
        if (*resposta > *(v + i))
        {
            resposta = (v + i); //armazene o endereço de memória do menor elemento do vetor v, no ponteiro 'resposta'.
        }
    }
    printf("endereço: %0p | valor: %d\n", resposta, *resposta); //utilizando o ponteiro 'resposta', imprima na tela o endereço de memória encontrado e o seu valor.

    return 0;
}