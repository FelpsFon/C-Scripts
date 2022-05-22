#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Felipe Louzada Guedes Carneiro da Fontoura - 2112130011

typedef struct {
  char nome[50];
  float nota;
} t_aluno;

typedef struct No {
  t_aluno aluno;
  struct No *proximo;
} t_no;

typedef struct {
  t_no *topo;
} t_lista;

t_lista *inicializar();
void push(t_lista *lista);
void pop(t_lista *lista);
void top(t_lista *lista);
void listar(t_lista *lista);

int main() {
  t_lista *lista = inicializar();
  if(lista == NULL)
    return 1;
	
	while(1) {
    system("clear"); // linux
    // ststem("cls"); // windows
    int opcao = 0;
  		printf("1 - Push Aluno\n");
			printf("2 - Pop Aluno\n");
  		printf("3 - Valor do Topo\n");
      printf("0 - Sair.\n");
      printf("Opção: ");
      scanf("%d%*c", &opcao);

    switch(opcao) {
      case 1:
				push(lista);
				break;
			case 2:
				pop(lista);
				break;
			case 3:
				top(lista);
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
    if(nova_lista != NULL)
        nova_lista->topo = NULL;
    return nova_lista;
}

void push(t_lista *lista) { //análogo à função inserir, empilha inserindo um novo nó no topo da pilha (xn+1)
  t_no *novo_aluno = malloc(sizeof(t_no));
  
  printf("Insira o nome do(a) aluno(a): ");
  scanf("%[^\n]%*c", novo_aluno->aluno.nome);
  printf("Agora a nota do(a) aluno(a): ");
  scanf("%f%*c", &novo_aluno->aluno.nota);

  if(lista->topo == NULL) { //caso pilha vazia
    lista->topo = novo_aluno;
    novo_aluno->proximo = NULL;
  } else {
      novo_aluno->proximo = lista->topo;
      lista->topo = novo_aluno;    
    }
}

void top(t_lista *lista) { //obtém o nó do topo da lista.
	t_no *topo = lista->topo;

	if(lista->topo == NULL) {
    printf("Pilha vazia!\n");
  } else
  	printf("Aluno: {nome: %s, nota: %.2f}\n", topo->aluno.nome, topo->aluno.nota);
}

void pop(t_lista *lista) { //desempilha / remove o elemento do topo da lista.
  t_no *no = lista->topo;
	
	if(lista->topo == NULL) {
    printf("Pilha vazia!\n");
  } else {
  	lista->topo = no->proximo;
  	free(no);
	}
}

//Felipe Louzada Guedes Carneiro da Fontoura - 2112130011