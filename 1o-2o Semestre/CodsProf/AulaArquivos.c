#include <stdio.h>

void leitura_arquivo() {
  FILE *fp; // file pointer.
  fp = fopen("./README.md", "r");

  char ch;
  if(fp == NULL) {
    printf("Impossível abrir o arquivo!\n");
  }  else { // operações de leitura
    while((ch = fgetc(fp)) != EOF) {
      printf("%c", ch);
    }
    fclose(fp);
  }
}

void leitura_arquivo2() {
  FILE *fp; // file pointer.
  fp = fopen("./lista.txt", "r");

  int n1, n2, n3;

  if(fp == NULL) {
    printf("Impossível abrir o arquivo!\n");
  }  else { // operações de leitura
    while(fscanf(fp, "%d %d %d", &n1, &n2, &n3) != EOF) {
      printf("n1: %d, n2: %d, n3: %d\n", n1, n2, n3);
    }
    fclose(fp);
  }
}

void escrita_arquivo() {
  FILE *fp; // file pointer.
  fp = fopen("./numeros.txt", "w");

  int vetor[10] = {4, 3, 2, 3, 1, 4, 5, 6, 0, 10};

  if(fp == NULL) {
    printf("Impossível abrir o arquivo!\n");
  }  else { // operações de escrita
    for(int i = 0; i < 10; i++) {
      fprintf(fp, "num %d: %d\n", i, vetor[i]);
    }
    fclose(fp);
  }
}

void escrita_binaria() {
  int vetor[10] = {4, 3, 2, 3, 1, 4, 5, 6, 0, 10};

  FILE *fp = fopen("./DADOS.BIN", "wb");
  if(fp == NULL) {
    printf("Impossível abrir o arquivo!\n");
  }  else { // operações de escrita
      fwrite(vetor, sizeof(int), 10, fp);
      fclose(fp);
  }
}

void leitura_binaria() {
  int vetor[10];
  FILE *fp = fopen("./DADOS.BIN", "rb");
  if(fp == NULL) {
    printf("Impossível abrir o arquivo!\n");
  }  else { // operações de leitura
    fread(vetor, sizeof(int), 10, fp);
    fclose(fp);
    
    for(int i = 0; i<10; i++) {
      printf("num %d: %d\n", i, vetor[i]);
    }
  }
}

int main() {
  
  //leitura_arquivo();
  //leitura_arquivo2();
  //escrita_arquivo();
  //escrita_binaria();
  //leitura_binaria();
  
  return 0;
}