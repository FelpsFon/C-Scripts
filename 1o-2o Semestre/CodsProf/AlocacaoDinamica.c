#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {               //0    99 100
  char nome[100];  // 101 bytes [C]..[@][\0]
  unsigned int idade; // 4 bytes
  float salario; // 4 bytes
} t_pessoa; // sizeof(t_pessoa)

//-----------------------------------------------------------------
// malloc + realloc
//-----------------------------------------------------------------
void alocacao_malloc() {
  // b) alocar uma string de 100 posições
  //[D][a][n][i][e][l][\0]
  char str[] = "Daniel";
  char *str_dinamica;
  str_dinamica = malloc((sizeof(char)*100) + 1);
  str_dinamica = realloc(str_dinamica, sizeof(char) * 50);

  //str_dinamica = malloc(101);
  // c) um array de float de 15 posições
  //sizeof(float)*15
  float *float_dinamico;
  float_dinamico = malloc(sizeof(float)*15);

  // d) um array de 20 estrutura do tipo t_pessoa
  printf("sizeof(t_pessoa): %ld\n", sizeof(t_pessoa));
  t_pessoa *pessoas_diniamica;
  pessoas_diniamica = malloc(sizeof(t_pessoa)*20);
  pessoas_diniamica = realloc(pessoas_diniamica, sizeof(t_pessoa) * 5);

  // e) uma matriz 5x5 de inteiros
  //5x5 = 25 * (4 bytes ou sizeof(int));
  int **mat;
  int linha = 2, coluna = 2;
  mat = malloc(linha * sizeof(int*)); // vetor de 5 ponteiros

  for(int i = 0; i < linha; i++)
    mat[i] = malloc(sizeof(int) * coluna);

  // ler matriz
  for(int i = 0; i < linha; i++) {
    for(int j = 0; j < coluna; j++) {
      printf("insira um numero: ");
      scanf("%d", &mat[i][j]);
    }
  }
  // imprimir matriz
  for(int i = 0; i < linha; i++) {
    for(int j = 0; j < coluna; j++) {
      printf("mat[%d][%d]: %d\n", i, j, mat[i][j]);
    }
  }
}

//-----------------------------------------------------------------
// calloc + realloc
//-----------------------------------------------------------------

void alocacao_calloc() {
  // a) alocar um inteiro com calloc
  int *num_dinamico;
  num_dinamico = calloc(1, sizeof(int)); // malloc(1 * sizeof(int));

  // b) alocar uma string de 100 posições
  char *str_dinamico;// 100 posicoes (char) + '\0'
  str_dinamico = calloc(100+1, sizeof(char));
  str_dinamico = realloc(str_dinamico, sizeof(char) * 50);

  // c) um array de float de 15 posições
  float *float_dinamico;
  float_dinamico = calloc(15, sizeof(float));

  // d) um array de 20 estrutura do tipo t_pessoa
  t_pessoa *pessoas;
  pessoas = calloc(20, sizeof(t_pessoa));
  pessoas = realloc(pessoas, sizeof(t_pessoa) * 5);

//-----------------------------------------------------------------
// free - liberar espaço da memória dinâmica
//-----------------------------------------------------------------
  free(num_dinamico);
  free(str_dinamico);
  free(float_dinamico);
  free(pessoas);

}

//-----------------------------------------------------------------
// Funções que retornam memória alocada dinamicamente
//-----------------------------------------------------------------
t_pessoa *aloca_pessoas(int n) {
  t_pessoa *pessoas;
  pessoas = calloc(n, sizeof(t_pessoa));

  if(pessoas != NULL) {
    // scanf()
  }

  return pessoas;
}

char *copia_str(char str[]) { // "Daniel"
  char *nova_str;
  //[D][a][n][i][e][l][\0]
  nova_str = malloc(strlen(str)+1);
  if(nova_str != NULL) 
    strcpy(nova_str, str);
  
  return nova_str;
}

int main(void) {
  
  t_pessoa *pessoas;
  pessoas = aloca_pessoas(25);

  char *copia;
  copia = copia_str("Daniel");

  if(copia != NULL)
    printf("copia: %s\n", copia);

  return 0;
}