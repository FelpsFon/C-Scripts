#include <stdio.h>
                                  // int mat[][n] ou int (*mat)[n]
void preencherMatriz2D(int m, int n, int (*mat)[n]);
                                  // int mat[][n]
void imprimirMatriz2D(int m, int n, int mat[m][n]);

// Forma avançada de acessar elementos de uma matriz como um ponteiro ou vetor unidimensional.
void imprimirMatriz2DPonteiro1Dv1(int n, int *arr); // n = linha * coluna
void imprimirMatriz2DPonteiro1Dv2(int m, int n, int *arr);
void preencherMatriz2DPonteiro1Dv1(int n, int *arr); // n = linha * coluna
void preencherMatriz2DPonteiro1Dv2(int m, int n, int *arr);
int main() {
  int mat[3][3]; // elementos inicializados com lixo de memória.

  printf("Armazena valores na matriz:\n");
  //preencherMatriz2D(3, 3, mat);
  preencherMatriz2DPonteiro1Dv2(3, 3, mat);
  printf("Imprime valores da matriz:\n");
  //imprimirMatriz2D(3, 3, mat);
  imprimirMatriz2DPonteiro1Dv2(3,3, mat);

  return 0;
}

void preencherMatriz2D(int m, int n, int (*mat)[n]) {
  for(int i = 0; i < m; i++) {
    for(int j = 0; j < n; j++) {
      printf("mat[%d][%d]: ", i, j);
      scanf("%d", &mat[i][j]);
    }
  }
}

void imprimirMatriz2D(int m, int n, int mat[m][n]) {
  for(int i = 0; i < m; i++) {
    for(int j = 0; j < n; j++) {
      printf("mat[%d][%d]: %d\n", i, j, mat[i][j]);
    }
  }
}

/**
* Forma avançada de acessar elementos de uma matriz como um ponteiro ou vetor unidimensional.
*/
void preencherMatriz2DPonteiro1Dv1(int n, int *arr) {
  /*
  matriz 3 x 3 = 0..8 (9 elementos)
  0 1 2 [0][0] [0][1] [0][2]
  3 4 5 [1][0] [1][1] [1][2]
  6 7 8
  */
  for(int i = 0; i < n; i++) {
    printf("arr[%d]: ", i);
      scanf("%d", &arr[i]);
  }

}

void preencherMatriz2DPonteiro1Dv2(int m, int n, int *arr) {
  for(int i = 0; i < m; i++) {
    for(int j = 0; j < n; j++) {
      printf("mat[%d][%d]: ", i, j);
      //scanf("%d", (arr + j + i + (i*(n-1))));
      scanf("%d", (arr + (i*n) + j ));
    }
  }
}

void imprimirMatriz2DPonteiro1Dv1(int n, int *arr) {
  for(int i = 0; i < n; i++) {
    printf("arr[%d]: %d\n", i, arr[i]);
  }

}

void imprimirMatriz2DPonteiro1Dv2(int m, int n, int *arr) {
  for(int i = 0; i < m; i++) { // linha
    for(int j = 0; j < n; j++) { // coluna
      //printf("mat[%d][%d]: %d\n", i, j, *(arr + j + i + (i*2)));
      printf("mat[%d][%d]: %d\n", i, j, *(arr + (i*n) + j ));
    }
  }
}
