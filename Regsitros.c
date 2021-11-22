#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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

void ler_pessoa(t_pessoa *p) //Procedimento para inserir os dados da pessoa
{
  printf("Insira o nome da pessoa: ");
  fgets(p->nome, 100, stdin);

  printf("Agora sua idade: ");
  scanf("%d", &p->idade);

  printf("E seu salario: ");
  scanf("%f", &p->salario);

  printf("Qual o status desta pessoa? (1 - Ativo | 0 - Inativo)\n");
  scanf("%d", &p->status);
}

/*3. Implemente a função mostrar_pessoa(t_pessoa *p), que permite mostrar todos os dados
relativos a uma determinada pessoa.*/

void mostrar_pessoa(t_pessoa *p) //Procedimento para imprimir os dados da pessoa
{
  printf("\nNome: %sIdade: %d\nSalario: %.2f\nStatus: ",
                      p->nome, p->idade, p->salario);

  if (p->status == 1)
    printf("1 - Ativo\n");
  else
    printf("0 - Inativo\n");
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

void EsperaTecla() //Espera o usuário apertar alguma tecla para continuar o programa
{
  printf("Aperte qualquer tecla para continuar...");
  getchar();
}

void inserir_registro(int n, t_pessoa pessoas[n], int *posicao_vazia) //Inserir um novo registro
{
  if(*posicao_vazia < n)
  {
    ler_pessoa(&pessoas[*posicao_vazia]);
    *posicao_vazia = *posicao_vazia + 1;
  }
  else
    printf("A lista ja esta cheia!\n");
}

void alterar_registro(t_pessoa pessoas[], int *posicao_vazia) //Alterar algum registro
{
	int num_registro;

	if(*posicao_vazia <= 0)
    printf("Lista vazia!");
	else
  {
		printf("Insira o registro a ser alterado, de 0 a %d: ", (*posicao_vazia - 1) );
		scanf("%d%*c", &num_registro);

		if(num_registro >= *posicao_vazia || num_registro < 0)
      printf("Posicao invalida!\n");
		else
      ler_pessoa(&pessoas[num_registro]);
	}
}

void apagar_registro(t_pessoa pessoas[], int *posicao_vazia)  //Apagar algum registro
{
  int pos_deletar;

  printf("Escolha qual pessoa da lista deseja apagar de 0 a %d: ", (*posicao_vazia - 1) );
  scanf("%d", &pos_deletar);

  if(pos_deletar < *posicao_vazia)
  {
    if(pos_deletar == (*posicao_vazia - 1) )
      (*posicao_vazia)--;
    else
    {
      for(int i = pos_deletar; i <= (*posicao_vazia - 2); i++)
      {
        pessoas[i] = pessoas[i+1];
      }
      (*posicao_vazia)--;
    }
  }
  else printf("Operacao invalida!\n");
} //[3] [7] [4] [5] [5] []

void listar_registros(t_pessoa pessoas[], int *posicao_vazia) //Listar os registros feitos
{
  if(*posicao_vazia == 0)
    printf("Lista vazia!\n");
  else
    for(int i = 0; i < *posicao_vazia; i++)
    {
      mostrar_pessoa(&pessoas[i]);
    }
}

void pesquisar_registros_entre_idades(t_pessoa pessoas[], int *posicao_vazia) //Pesquisar de X a Y idade
{
  int iMenor, iMaior;

	printf("Insira a menor e a maior idade:\n");
	scanf("%d %d", &iMenor, &iMaior);
	
	if(*posicao_vazia == 0)
  {
    printf("Lista vazia!\n");
  }
  else
  {
    for(int i = 0; i < *posicao_vazia; i++)
      if (pessoas[i].idade >= iMenor && pessoas[i].idade <= iMaior)
        mostrar_pessoa(&pessoas[i]);
  }
}

void pesquisar_registros_nomes(t_pessoa pessoas[], int *posicao_vazia) //Pesquisar por Nome
{
  char nomePesquisa[100];

  printf("Insira o nome da pessoa que deseja procurar:\n");
  gets(nomePesquisa);

  if(*posicao_vazia == 0)
    printf("Lista vazia!\n");
  else
  {
    for(int i = 0; i < *posicao_vazia; i++)
    {
      if (strstr(pessoas[i].nome, nomePesquisa))
        mostrar_pessoa(&pessoas[i]);
    }
  }
}

void pesquisar_registros_status(t_pessoa pessoas[], int *posicao_vazia)  //Pesquisar por Status
{
  int statusPesquisa;

  printf("Insira qual stauts deseja procurar: ");
  scanf("%d", &statusPesquisa);

  if(*posicao_vazia == 0)
  {
    printf("Lista vazia!\n");
  }
  else
  {
    for(int i = 0; i < *posicao_vazia; i++)
      if (pessoas[i].status == statusPesquisa)
        mostrar_pessoa(&pessoas[i]);
  }
}

int main() //MAIN final com todo o programa
{
  // t_pessoa pessoa;
  t_pessoa pessoas[10];

  // ler_pessoa(&pessoa);
  // mostrar_pessoa(&pessoa);
  int posicao_vazia = 0, input;

  do {
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
        inserir_registro(10, pessoas, &posicao_vazia);
        EsperaTecla();
        break;
      case 2:
        alterar_registro(pessoas, &posicao_vazia);
        EsperaTecla();
        break;
      case 3:
        apagar_registro(pessoas, &posicao_vazia);
        EsperaTecla();
        break;
      case 4:
        listar_registros(pessoas, &posicao_vazia);
        EsperaTecla();
        break;
      case 5:
        do {
      	  system("cls");

      	  printf("1. Pesquisar por intervalo de idades\n");
      	  printf("2. Pesquisar por Nome\n");
      	  printf("3. Pesquisar por Status\n");
      	  printf("0. Voltar\n");

      	  scanf("%d%*c", &input);

      	  switch(input)
          {
      		  case 1:
              pesquisar_registros_entre_idades(pessoas, &posicao_vazia);
              EsperaTecla(); getchar();
      			  break;
        		case 2:
              pesquisar_registros_nomes(pessoas, &posicao_vazia);
              EsperaTecla();
      			  break;
      		  case 3:
              pesquisar_registros_status(pessoas, &posicao_vazia);
              EsperaTecla(); getchar();
      			  break;
      		  case 0:
      			  break;
      		  default:
      			  printf("Opcao invalida!");
              EsperaTecla();
      			  break;
      	  }
	      } while(input != 0);
        break;
      case 6:
        system("cls");
        printf("Ate logo!\n");
        break;
      default:
        printf("Apenas numeros de 1 a 6, por favor!\n");
        EsperaTecla();
    }
  } while(input != 6);
  return 0;
}