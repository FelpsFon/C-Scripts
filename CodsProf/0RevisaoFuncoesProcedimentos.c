//https://drive.google.com/file/d/1lIkjtXy5uQ3maPZ34FZHZyeJKHnm61Pn/view

/*
FUNÇÕES E PROCEDIMENTOS

1. Qual é a diferença entre função e procedimento?

- Funções sempre retornam valor.
- Procedimentos são funções que retornam valor.

2. Existem passagem de parâmetros por referência na linguagem C?

- NÃO.

// passagem de param. valor
void func(int n) { //  n = 5
  n = 4;
}


// passagem de param. valor "referencia"
void func_ref(int *n) { // n = &num
  *n = 4;
}


int main() {

  int num = 5;

  func(num);

  func_ref(&num);

  return 0;
}

3. O que é passagem de parâmetros por valor e por referência?

- valor - é sempre a cópia do valor de uma variável que é passada para um parâmetro.
- referência - é sempre passado uma referência da variável passada como parâmetro.

4. Considere o seguinte programa.

  a) Modifique o programa para que os valores entre n1 e n2 sejam trocados com a função troca.

  b) Altere o programa para que todos os números divisíveis por 5 de vet sejam modificados para zero com o auxílio de uma função.
  
  c) Altere o programa para que todos os caracteres de str sejam modificados para caixa alta com o auxílio de uma função.

*/

#include <stdio.h>

// por "referência"
void troca(int *a, int *b) { // a = &n1, b = &n2
  int aux = *a;
  *a = *b;
  *b = aux;
}

void zerar_num_div_5(int n, int vet[n]) { // (ou int *vet)
  for(int i = 0; i < n; i++) {
    //vet[i] é divisível por 5?
    if(vet[i] % 5 == 0) {
      vet[i] = 0;
    }
  }
}

void to_upper(char string[]) {
  for(int i = 0; string[i] != '\0'; i++) {
    if(string[i] >= 'a' && string[i] <= 'z') {
      string[i] = string[i] - 32;
    }
  }
}

int main(void) {
  int n1 = 5, n2 = 3, vet[7] = {10, 3, 15, 2, 20, 6, 40};
  char str[] = "Olá mundo em caixa alta!";

  // item a) Modifique a função troca.
  troca(&n1, &n2);
  printf("n1: %d, n2: %d\n", n1, n2);

  // item b) Implementar função para zerar números divisíveis por 5.
  zerar_num_div_5(7, vet);
  for(int i = 0; i < 7; i++) {
    printf("vet[%d]: %d\n", i, vet[i]);
  }

  // item c) Implementar a função que transforma str em caixa alta
  to_upper(str);
  printf("str em caixa alta: %s", str);
  return 0;
}