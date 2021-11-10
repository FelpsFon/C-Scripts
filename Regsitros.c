#include <stdio.h>
typedef struct
{
    char nome[100];
    int idade, status;
    float salario;
} t_pessoa;

int main()
{
    t_pessoa *p = 0;

    printf("\n", ler_pessoa(p));
    return 0;
}

t_pessoa ler_pessoa(t_pessoa *p)
{
    
}