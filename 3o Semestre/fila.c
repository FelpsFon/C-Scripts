#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Felipe Louzada Guedes Carneiro da Fontoura - 2112130011

typedef struct{
  char nome[50];
  float nota;
} t_aluno;

typedef struct No{
  t_aluno aluno;
  struct No *proximo;
  struct No *anterior;
} t_no;

typedef struct{
  t_no *inicio;
  t_no *fim;
} t_lista;

t_lista *inicializar();
void desenfileira(t_lista *lista);
void enfileira(t_lista *lista);
void listar_fim_inicio(t_lista *lista);
void listar_inicio_fim(t_lista *lista);

int main() {
  t_lista *lista = inicializar();
  if(lista == NULL)
    return 1;

	while(1) {
    system("clear"); // linux
    // ststem("cls"); // windows
    int opcao = 0;
  		printf("1 - Enfileirar Aluno(a)\n");
  		printf("2 - Desenfileirar Aluno(a)\n");
      printf("3 - Listar do Início ao Fim\n");
			printf("4 - Listar do Fim ao Início\n");
      printf("0 - Sair.\n");
      printf("Opção: ");
      scanf("%d%*c", &opcao);

    switch(opcao) {
      case 1:
				enfileira(lista);
				break;
			case 2:
				desenfileira(lista);
				break;
			case 3:
				listar_inicio_fim(lista);
				getchar();
        break;
			case 4:
				listar_fim_inicio(lista);
				getchar();
				break;
			case 0:
				system("clear");
				return 0;
    	default:
        printf("Opção inválida!");
        getchar();
    }
  }
}

t_lista *inicializar() {
  t_lista *nova_lista = malloc(sizeof(t_lista));
	
  if(nova_lista != NULL) {
    nova_lista->inicio = NULL;
    nova_lista->fim = NULL;
  }
	
  return nova_lista;
}

void enfileira(t_lista *lista) { //insira/enfileira um novo elemento no fim da lista.
  t_no *novo_aluno = malloc(sizeof(t_no));
  novo_aluno->proximo = NULL;
  
  printf("Insira o nome do(a) aluno(a): ");
  scanf("%[^\n]%*c", novo_aluno->aluno.nome);
  printf("Agora a nota do(a) aluno(a): ");
  scanf("%f%*c", &novo_aluno->aluno.nota);

  if(lista->inicio == NULL) {
    lista->inicio = novo_aluno;
    lista->fim = novo_aluno;
  } else {
    t_no *no = lista->fim;

    no->proximo = novo_aluno;
    lista->fim = novo_aluno;
    novo_aluno->anterior = no;
  }
}

void desenfileira(t_lista *lista) { //obtém o nó do início, removendo-o da lista
  t_no *no = lista->inicio;

	if(lista->inicio == NULL) {
    printf("Fila vazia!\n");
  } else {
  	lista->inicio = no->proximo;
  	free(no);
	
  	lista->inicio->anterior = NULL;
	}
}

void listar_inicio_fim(t_lista *lista) { //exibe todos os elementos da fila a partir do início até o fim.
  t_no *no = lista->inicio;

	if(lista->inicio == NULL) {
    printf("Fila vazia!\n");
  } else {
  	while(no != NULL) {
    	printf("Aluno(a): {nome: %s, nota: %.2f}\n", no->aluno.nome, no->aluno.nota);
    	no = no->proximo;
		}
  }
}

void listar_fim_inicio(t_lista *lista) { //exibe todos os elementos da fila a partir do fim até o início.
  t_no *no = lista->fim;

	if(lista->inicio == NULL) {
    printf("Fila vazia!\n");
  } else {
  	while(no != NULL) {
    	printf("Aluno(a): {nome: %s, nota: %.2f}\n", no->aluno.nome, no->aluno.nota);
    	no = no->anterior;
		}
  }
}

//Felipe Louzada Guedes Carneiro da Fontoura - 2112130011