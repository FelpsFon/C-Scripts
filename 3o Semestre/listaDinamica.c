#include <stdio.h>
#include <stdlib.h>

typedef struct No
{
  int elemento;
  struct No *proximo;
} t_no;

typedef struct
{
  t_no *inicio;
  t_no *fim;
} t_lista;

t_lista *inicializar_lista()
{
  t_lista *lista = malloc(sizeof(t_lista));
  lista->inicio = NULL;
  lista->fim = NULL;

  return lista;
}

void inserir_elemento(t_lista *lista)
{
  // inserir elemento na lista
  int i, tam;

  printf("Insira o tamanho desejado para lista: ");
  scanf("%d", &tam);

  // Criar novo elemento & Inseri-lo no fim da lista.
  for (i = 0; i < tam; i++)
  {
    t_no *no = NULL;
    no = malloc(sizeof(t_no));

    t_no *proxno = NULL;
    proxno = malloc(sizeof(t_no));

    printf("Insira o novo número: ");
    scanf("%d", &no->elemento);

    no->proximo = &proxno;
    lista->inicio = no;

    // inserção no fim

    lista->fim->proximo = no;
    lista->fim = no;
    
    lista->fim = proxno;

    no->proximo = NULL;
  }
}

void listar_elementos(t_lista *lista)
{
  if (lista->inicio == NULL)
    printf("Lista vazia!\n");
  else
  {
    t_no *no = lista->inicio;
    while (no != NULL)
    {
      printf("%d\n", no->elemento);
      no = no->proximo;
    }
  }
}

int main()
{
  // inicializar lista
  t_lista *lista = inicializar_lista();
  inserir_elemento(lista);
  listar_elementos(lista);

  return 0;
}