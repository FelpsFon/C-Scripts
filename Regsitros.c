#include <stdio.h>
#include <stdlib.h>

/*1. Defina em C um novo tipo denominado t_pessoa que contenha as seguintes características:
• nome: String (tamanho 100),
• idade: inteiro,
• salário: real, e
• status: inteiro (0 - indica inativo; e 1 - indica ativo)
*/
typedef struct //Definição da estrutura "t_pessoa"
{
    char nome[100];
    int idade, status;
    float salario;
} t_pessoa;

/*2. Implemente a função ler_pessoa(t_pessoa *p), que permite ler todos os dados relativos a uma
determinada pessoa. Considere que toda nova pessoa é inicializada com status 1 - ativo.*/

void ler_pessoa(t_pessoa *p) //Procediemnto para inserir os dados da pessoa
{
    printf("Insira o nome da pessoa:");
    fgets(p->nome, 100, stdin);

    printf("Agora sua idade: ");
    scanf("%d", &p->idade);

    printf("E seu salario: ");
    scanf("%f", &p->salario);

    p->status = 1;
}

/*3. Implemente a função mostrar_pessoa(t_pessoa *p), que permite mostrar todos os dados relativos a
uma determinada pessoa.*/

void mostrar_pessoa(t_pessoa *p) //Procediemnto para imprimir os dados da pessoa
{
    printf("\nPessoa 1:\nNome: %sIdade: %d\nSalario: %.2f\nStatus: ", p->nome, p->idade, p->salario);
    if (p->status == 1) printf("Ativo\n"); else printf("Inativo\n");
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

void appPessoas(t_pessoa *p) //Função para fazer o menu de interação
{
    int input;

    while(input != 6)
    {
        system("cls");

        //Inserir Registro
        printf("1. Inserir Registro\n");

        //Alterar Registro
        printf("2. Alterar registro\n");

        //Apagar Registro
        printf("3. Apagar registro\n");

        //Listar Registros
        printf("4. Listar registros\n");

        //Pesquisas
        printf("5. Pesquisas\n");

        //Sair
        printf("6. Sair\n");
    
        printf("Escolha uma das opcoes: ");
        scanf("%d%*c", &input);

        switch(input)
        {
            case 1:
                system("cls");
                inserir_registro();
                break;
            case 2:
                system("cls");
                alterar_registro();
                break;
            case 3:
                system("cls");
                apagar_registro();
                break;
            case 4:
                system("cls");
                listar_registros();
                break;
            case 5:
                system("cls");
                pesquisas();
                break;
            default:
                printf("Apenas números de 1 a 6, por favor!");
        }
    }
}

void inserir_registro(t_pessoa *p)
{
    printf("Aonde deseja inserir este registro? ");

    printf("Insira o nome da pessoa:");
    fgets(p->nome, 100, stdin);

    printf("Agora sua idade: ");
    scanf("%d", &p->idade);

    printf("E seu salario: ");
    scanf("%f", &p->salario);

    printf("Qual o status atual desta pessoa? (0 - Inativa | 1 - Ativa) ");
    scanf("%d", &p->status);
}

void alterar_registro()
{

}

void apagar_registro()
{

}

void listar_registros()
{

}

void pesquisas()
{

}

int main() //MAIN final com todo o programa
{
    // t_pessoa pessoa;
    t_pessoa pessoas[10];
    int n = 2;

    // ler_pessoa(&pessoa);
    // mostrar_pessoa(&pessoa);
    appPessoas(&pessoas[n]);
    
    return 0;
}