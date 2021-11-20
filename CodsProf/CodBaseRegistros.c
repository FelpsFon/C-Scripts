#include <stdio.h>
#include <stdlib.h>
/*
1. Defina em C um novo tipo denominado t_pessoa que contenha as seguintes características:
• nome: String (tamanho 100),
• idade: inteiro,
• salário: real, e
• status: inteiro (0 - indica inativo; e 1 - indica ativo)
*/

typedef struct {
  char nome[100];
  int idade;
  float salario;
  int status;
} t_pessoa;
/*
2. Implemente a função ler_pessoa(t_pessoa *p), que permite ler todos os dados relativos a uma
determinada pessoa. Considere que toda nova pessoa é inicializada com status 1 - ativo.
*/
void ler_pessoa(t_pessoa *p) {
  printf("Insira o nome: ");
  fgets(p->nome, 100, stdin);
  printf("Insira a idade: ");
  scanf("%d", &p->idade);
  
  printf("Insira o salário: ");
  scanf("%f%*c", &p->salario);

  p->status = 1;
}

/*
Implemente a função mostrar_pessoa(t_pessoa *p), que permite mostrar todos os dados relativos a
uma determinada pessoa.
*/

void mostrar_pessoa(t_pessoa *p) {
  printf("nome: %s\nidade: %d\nsalario: %f\nstatus: %d\n", p->nome, p->idade, p->salario, p->status);
}

void inserir_registro(int n, t_pessoa pessoas[n], int *posicao_vazia) {
  if(*posicao_vazia < n) {
    ler_pessoa(&pessoas[*posicao_vazia]);
    *posicao_vazia = *posicao_vazia + 1;
  } else {
    printf("Lista já está cheia!\n");
  }
  
}

void apagar_registro(t_pessoa pessoas[], int *posicao_vazia) {
  
  int pos_deletar;
  printf("Escolha qual pessoa da lista deseja apagar de 0 a %d: ", *posicao_vazia-1);
  scanf("%d", &pos_deletar);
  if(pos_deletar < *posicao_vazia) { // 
    if(pos_deletar == *posicao_vazia -1) {
      (*posicao_vazia)--;
    } else {
      for(int i = pos_deletar; i <= *posicao_vazia-2; i++) {
        pessoas[i] = pessoas[i+1];
      }
      (*posicao_vazia)--;
    }
  } else {
    printf("Operação inválida!\n");
  }
	//[3] [7] [4] [5] [5] []
}

void listar_registros(t_pessoa pessoas[], int *posicao_vazia) {
  if(*posicao_vazia == 0) {
    printf("Lista vazia!\n");
  } else {
    for(int i = 0; i < *posicao_vazia; i++) {
      mostrar_pessoa(&pessoas[i]);
    }
  }
}

void pesquisar_registros_entre_idades(t_pessoa pessoas[], int *posicao_vazia) {
  int iMenor, iMaior;
	printf("Insira a menor e a maior idade:\n");
	scanf("%d %d", &iMenor, &iMaior);
	
	if(*posicao_vazia == 0) {
    printf("Lista vazia!\n");
  } else {
    for(int i = 0; i < *posicao_vazia; i++) {
      if (pessoas[i].idade >= iMenor && pessoas[i].idade <= iMaior) { mostrar_pessoa(&pessoas[i]); }
    }
  }
}

void alterar_registro(t_pessoa pessoas[], int *posicao_vazia){
	int num_registro;

	if(*posicao_vazia <= 0) printf("Lista vazia!");
	
	else {
		printf("Insira o registro a ser alterado, de 0 a %d: ", *posicao_vazia -1);
		scanf("%d%*c", &num_registro);

		if(num_registro >= *posicao_vazia || num_registro < 0) printf("Posição inválida!\n");
		else ler_pessoa(&pessoas[num_registro]);
	}
}

//void pesquisar_registro(t_pessoa){}

int main(void) {

  //t_pessoa pessoa;
  //ler_pessoa(&pessoa);
  //mostrar_pessoa(&pessoa);

  t_pessoa pessoas[10];
  int posicao_vazia = 0;

  int opcao;

  do {

    system("cls");

    printf("1. Inserir registro\n");
    printf("2. Alterar registro\n");
    printf("3. Apagar registro\n");
    printf("4. Listar registros\n");
    printf("5. Pesquisas\n");
    printf("6. Sair\n");

    printf("Escolha uma das opções (de 1 a 6): ");
    scanf("%d%*c", &opcao);

    switch(opcao){
      case 1:
        inserir_registro(10, pessoas, &posicao_vazia);
        break;
      case 2:
        alterar_registro(pessoas, &posicao_vazia);
        break;
      case 3:
        apagar_registro(pessoas, &posicao_vazia);
        break;
      case 4:
        listar_registros(pessoas, &posicao_vazia);
        break;
      case 5:
        do{
					system("cls");

					printf("1. Pesquisar por intervalo de idades\n");
					printf("2. Pesquisar por Nome\n");
					printf("3. Pesquisar por Status\n");
					printf("0. Voltar\n");

					scanf("%d", &opcao);

					switch(opcao){
						case 1:

							break;
						case 2:

							break;
						case 3:

							break;
						case 0:

							break;
						default:
							printf("Opção Inválida");
							break;
					}
				} while(opcao != 0);
        break;
      default:
        printf("Opção inválida!\n");
    }

    printf("Pressione enter para continuar!\n");
    scanf("%*c");

  } while(opcao != 6);

  return 0;
}