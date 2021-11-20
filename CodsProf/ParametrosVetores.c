#include <stdio.h>
                        // *vetor ou vetor[n]
void preencherVetor(int n, int v[]);
void imprimirVetor(int n, int *v);


int main() {
  int vetor[5]; // elementos inicializados com lixo de memória.
  printf("Armazena valores no vetor:\n");
  preencherVetor(5, vetor);

  printf("Apresentação dos valores do vetor.\n");
  imprimirVetor(5, vetor);

  return 0;
}

void preencherVetor(int n, int v[]) {
  for(int i = 0; i < n; i++) { // leitura
    printf("vetor[%d]: ", i);
    scanf("%d", &v[i]);
  }
}

void imprimirVetor(int n, int *v) {
  for(int i = 0; i < n; i++) { // escrita
    printf("vetor[%d]: %d\n", i, v[i]);
  }
}