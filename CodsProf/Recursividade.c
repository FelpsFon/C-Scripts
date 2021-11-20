#include <stdio.h>

int loop(int n) {
  printf("n: %d\n", n);
  return loop(n+1);
}

int fat_iterativo(int n);
int fat_recursivo(int n);

int fib(int n);
int fib_iterativo(int n);

int main(void) {
  int n = 6;
  printf("fib de %d: %d\n", n, fib_iterativo(n));
  return 0;
}

int fat_iterativo(int n) {
  if(n < 0) // não existe fatorial
    return 0;
  if(n == 0) // fat(0) = 1
    return 1;
  // n > 0
  int res = 1;
  for(int i = 1; i <= n; i++) {
    res = res * i;
  }
  return res;
}

int fat_recursivo(int n) { // para todos n >= 0
  if(n < 0) return 0;
  // critério de parada
  if(n == 0) return 1; 
  // se n > 0
  // passo recursivo
  return n * fat_recursivo(n-1);
}

int fib(int n) {
  // cirtérios de parada
  if(n <= 0) return 0;
  if(n == 1) return 1;
  // n >= 2
  // passo recursivo
  return fib(n-1) + fib(n-2);
}

int fib_iterativo(int n) {
  if(n <= 0) return 0;
  int fib = 1, proximoFib = 0, aux;
  for(int i = 1; i <= n; i++) {
    aux = fib + proximoFib;
    fib = proximoFib;
    proximoFib = aux;
  }
  return proximoFib;
}