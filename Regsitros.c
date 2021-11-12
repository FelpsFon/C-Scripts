#include <stdio.h>

/*1. Defina em C um novo tipo denominado t_pessoa que contenha as seguintes características:
• nome: String (tamanho 100),
• idade: inteiro,
• salário: real, e
• status: inteiro (0 - indica inativo; e 1 - indica ativo)
*/
typedef struct
{
    char nome[100];
    int idade, status;
    float salario;
} t_pessoa;

/*2. Implemente a função ler_pessoa(t_pessoa *p), que permite ler todos os dados relativos a uma
determinada pessoa. Considere que toda nova pessoa é inicializada com status 1 - ativo.*/

void ler_pessoa(t_pessoa *p)
{
    printf("Insira o nome da pessoa:");
    fgets(p->nome, 100, stdin);

    printf("\nAgora sua idade: ");
    scanf("%d", &p->idade);

    printf("\nE seu salario: ");
    scanf("%f", &p->salario);

    p->status = 1;
}

/*3. Implemente a função mostrar_pessoa(t_pessoa *p), que permite mostrar todos os dados relativos a
uma determinada pessoa.*/

void mostrar_pessoa(t_pessoa *p)
{
    printf("Ler Pessoa:\nNome: %s\nIdade: %d\nSalario: %0f\nStatus: %d\n", ler_pessoa(p->nome), ler_pessoa(p), ler_pessoa(p), ler_pessoa(p));
}

int main()
{
    t_pessoa pessoa;

    ler_pessoa(&pessoa);
    mostrar_pessoa(&pessoa);
    
    return 0;
}

/*4. Considerando uma lista vazia de 10 registros de pessoas t_pessoa pessoas[10], implemente uma
aplicação completa que contenha um menu com as seguintes opções:
a) 1. Inserir registro
b) 2. Alterar registro
c) 3. Apagar registro
d) 4. Listar registros
e) 5. Pesquisas
A opção 5 deverá apresentar um novo sub-menu com as seguintes opções:
i) 1. Pesquisar por intervalo de idades
ii) 2. Pesquisar por Nome
iii) 3. Pesquisar por Status
iv) 0. Voltar
f) 6. Sair*/

int appPessoas(t_pessoa *p)
{
    t_pessoa pessoas[10];
    return 0;
}

// int main()
// {
//     t_pessoa pessoa;

//     ler_pessoa(pessoa);
//     mostrar_pessoa(pessoa);
//     appPessoas(pessoa);
    
//     return 0;
// }