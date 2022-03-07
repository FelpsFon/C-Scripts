#include <stdio.h>

// PASSAGEM DE PARÂMETROS POR VALOR
void altera_a(int a, int valor);
// PASSAGEM DE PARÂMETROS POR "REFERÊNCIA"
void altera_ref_a(int *ptr, int valor);
void f1();

int main(void) {

  int a = 5;
  altera_ref_a(&a, 50);


  altera_a(a, 10);

  printf("main :: valor de a: %d\n", a);

  return 0;
}

void altera_a(int a, int valor) {
  a = valor;
  printf("altera_a :: valor de a: %d\n", a);
}

void altera_ref_a(int *ptr, int valor) { // ptr = &a (valor), valor = 7
  *ptr = valor; //*ptr = 7;
}

void f1() {
  printf("função visível\n");
}