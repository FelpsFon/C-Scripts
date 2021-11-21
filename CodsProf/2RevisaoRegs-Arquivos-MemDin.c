/*
Registros & Alocação Dinâmica:
https://drive.google.com/file/d/1fPPjCc72dNLPqrASApJ-UYJaPhIRtD_D/view

Arquivo Texto:
https://drive.google.com/file/d/1AD_yBLi4QI66ZxZEgFqy24RKFpxuupwC/view

Arquivo Binário:
https://drive.google.com/file/d/1WWAu7fC-ku6CVjw07Y8HhMRQA375Snac/view
*/

/*
1. Defina em C um novo tipo de dado denominado t_alimento que contenha os seguintes atributos:
  • nome: String (tamanho 100).
  • valor: real, maior ou igual a zero.
  • data_fabricacao: Estrutura t_data
  • data_validade: Estrutura t_data
t_data contém:
  • dia: inteiro positivo
  • mês: inteiro positivo
  • ano: inteiro positivo

2. Implemente a função que permita ler e modificar um alimento do tipo t_alimento, passado como parâmetro.

3. Implemente a função que permita escrever na tela todos os dados de um alimento.

4. (alocação dinâmica) Implemente uma função que aloque dinamicamente um vetor de n produtos, insira os dados desses n produtos, e retorne a posição de memória do bloco alocado dinamicamente.

5. (Arquivos) Implemente uma função que escreva um vetor de n alimentos em um arquivo de texto, seguindo o correspondente formato: ./alimentos.txt (espaços entre os campos são tabulações)

Biscoito Mabel  3.50  15  10  2021  15  10  2022
...

6. (Arquivos) Implemente uma função que retorne um vetor de alimentos alocado dinamicamente com base na quantidade armazenada em um arquivo de texto, que obedece o formato especificado no exercício 5. A quantidade de elementos a ser lida também é a mesma utilizada no exercício 5. (dicas: veja a página 4 da aula Arquivos)

7. (Arquivos) Repita o exercício 5, salvando o arquivo no modo binário (./alimentos.bin).

8. (Arquivos) Repita o exercício 6, lendo o arquivo no modo binário (./alimentos.bin).
*/

#include <stdio.h>
#include <stdlib.h>

/*
1. Defina em C um novo tipo de dado denominado t_alimento que contenha os seguintes atributos:
  • nome: String (tamanho 100).
  • valor: real, maior ou igual a zero.
  • data_fabricacao: Estrutura t_data
  • data_validade: Estrutura t_data
t_data contém:
  • dia: inteiro positivo
  • mês: inteiro positivo
  • ano: inteiro positivo
*/

typedef struct{
  unsigned int dia, mes, ano;
} t_data;

typedef struct{
  char nome[100];
  float valor;
  t_data dt_fab, dt_val;
} t_alimento;

/*
2. Implemente a função que permita ler e modificar um alimento do tipo t_alimento, passado como parâmetro.
*/
void ler_alimento(t_alimento *alimento) {
  printf("Insira o nome do alimento: "); //"Biscoito Maria\n"
  scanf("%[^\n]", alimento->nome);
  printf("Insira o valor do alimento: ");
  scanf("%f", &alimento->valor);
  printf("Insira a data de fabricação segindo a seguinte especificação dd/mm/aaaa: ");
  scanf("%d/%d/%d",
    &alimento->dt_fab.dia,
    &alimento->dt_fab.mes,
    &alimento->dt_fab.ano);
  printf("Insira a data de validade segindo a seguinte especificação dd/mm/aaaa: ");
  scanf("%d/%d/%d%*c",
    &alimento->dt_val.dia,
    &alimento->dt_val.mes,
    &alimento->dt_val.ano);
}

/*
3. Implemente a função que permita escrever na tela todos os dados de um alimento.
*/
void escrever_alimento(t_alimento alimento) {
  printf("nome: %s, valor: %.2f, dt_fab: %d/%d/%d, dt_val: %d/%d/%d\n",
      alimento.nome, alimento.valor,
      alimento.dt_fab.dia, alimento.dt_fab.mes, alimento.dt_fab.ano,
      alimento.dt_val.dia, alimento.dt_val.mes, alimento.dt_val.ano);
}

/*
4. (alocação dinâmica) Implemente uma função que aloque dinamicamente um vetor de n alimentos, insira os dados desses n alimentos, e retorne a posição de memória do bloco alocado dinamicamente.
*/
t_alimento *ler_n_alimentos(int n) {
  t_alimento *p_alimentos;
  p_alimentos = malloc(n*sizeof(t_alimento));
  
  if(p_alimentos != NULL) {
    for(int i; i < n; i++) {
      ler_alimento(&p_alimentos[i]);
    }
  }
  return p_alimentos;
}

/*
5. (Arquivos) Implemente uma função que escreva um vetor de n alimentos em um arquivo de texto, seguindo o correspondente formato: ./alimentos.txt (espaços entre os campos são tabulações)

Biscoito Mabel  3.50  15  10  2021  15  10  2022\n
Escrita %s\t%.2f\t%d\t%d\t%d\t%d\t%d\t%d\n
Leitura %[^\t]%f%d%d%d%d%d%d%*c

...


*/

void escrever_arquivo(int n, t_alimento alimentos[n]) {
  FILE *fp; // file pointer

  fp = fopen("./alimentos.txt", "w"); // w - escrita, r - leitura

  if(fp != NULL) {
    // operações de leitura e escrita
    for(int i = 0; i < n; i++) {
      fprintf(fp, "%s\t%.2f\t%d\t%d\t%d\t%d\t%d\t%d\n",
          alimentos[i].nome, alimentos[i].valor,
          alimentos[i].dt_fab.dia,alimentos[i].dt_fab.mes,alimentos[i].dt_fab.ano,
          alimentos[i].dt_val.dia,alimentos[i].dt_val.mes,alimentos[i].dt_val.ano);
    }
    fclose(fp);
  }

}

/*
6. (Arquivos) Implemente uma função que retorne um vetor de alimentos alocado dinamicamente com base na quantidade armazenada em um arquivo de texto, que obedece o formato especificado no exercício 5. A quantidade de elementos a ser lida também é a mesma utilizada no exercício 5. (dicas: veja a página 4 da aula Arquivos)
*/

t_alimento *ler_arquivo(int n) {
  FILE *fp; // file pointer

  fp = fopen("./alimentos.txt", "r"); // w - escrita, r - leitura

  t_alimento *alimentos;
  alimentos = malloc(sizeof(t_alimento)*n);

  if(fp != NULL && alimentos != NULL) {
    // operações de leitura e escrita
    int fim_do_arquivo;
    for(int i = 0; i < n; i++) {
      fim_do_arquivo = fscanf(fp, "%[^\t]%f%d%d%d%d%d%d%*c",
        alimentos[i].nome, &alimentos[i].valor,
        &alimentos[i].dt_fab.dia,&alimentos[i].dt_fab.mes,&alimentos[i].dt_fab.ano,
        &alimentos[i].dt_val.dia,&alimentos[i].dt_val.mes,&alimentos[i].dt_val.ano);
      
      if(fim_do_arquivo == EOF)
        break;
    }
    fclose(fp);
  }

  return alimentos;
}

/*
7. (Arquivos) Repita o exercício 5, salvando o arquivo no modo binário (./alimentos.bin).
*/
void escrever_arquivo_bin(int n, t_alimento alimentos[n]) {
  FILE *fp; // file pointer

  fp = fopen("./alimentos.bin", "wb"); // w - escrita, r - leitura

  if(fp != NULL) {
    // operações de leitura e escrita
    fwrite(alimentos, sizeof(t_alimento), n, fp);
    fclose(fp);
  }
}

/*

8. (Arquivos) Repita o exercício 6, lendo o arquivo no modo binário (./alimentos.bin).
*/

t_alimento *ler_arquivo_bin(int n) {
  FILE *fp; // file pointer

  fp = fopen("./alimentos.bin", "rb"); // w - escrita, r - leitura

  t_alimento *alimentos;
  alimentos = malloc(sizeof(t_alimento)*n);

  if(fp != NULL && alimentos != NULL) {
    // operações de leitura binária
    fread(alimentos, sizeof(t_alimento), n, fp);
    fclose(fp);
  }

  return alimentos;
}

void estrutura_arquivo() {

  FILE *fp; // file pointer

  fp = fopen("./alimentos.txt", "r"); // w - escrita, r - leitura

  if(fp != NULL) {
    // operações de leitura e escrita

    fclose(fp);
  }

}

int main(void) {
  t_alimento biscoito;

  //ler_alimento(&biscoito);
  //escrever_alimento(biscoito);
  t_alimento *alimentos;
  //alimentos = ler_n_alimentos(3);
  //escrever_arquivo(3, alimentos);
  //alimentos = ler_arquivo(3);
  //escrever_arquivo_bin(3, alimentos);
  alimentos = ler_arquivo_bin(3);
  escrever_alimento(alimentos[0]);
  escrever_alimento(alimentos[1]);
  escrever_alimento(alimentos[2]);
  


  return 0;
}