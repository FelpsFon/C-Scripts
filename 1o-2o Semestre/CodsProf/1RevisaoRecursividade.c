//https://drive.google.com/file/d/10HszakR9_YdWAdNxLsNu9LdL5Oncf7jo/view

/*
1. Qual a diferença entre algoritmo iterativo e recursivo?

-- ITERATIVO - executa passo a passo, uma série de procedimentos em loop para a resolução de um problema.

-- RECURSIVO - executa o passo de resolução de um problema (N), RECORRENDO aos passos de resoluções anteriores (N-1).

-- muitos algoritmos são mais simples de implementar recursivamente e podem se tornar bastante complexos iterativamente.

-- Algoritmos recursivos são mais legíveis que iterativos.

-- Algoritmos recursivos usam mais memória (STACK) do que  algoritmos iterativos.

-- Performance - Algoritmos recursivos são mais lentos que iterativos.

2. Para cada um dos itens abaixo: (i) encontre a definição recursiva da sequência; e (ii) implemente
o algoritmo recursivo.

a) Produtório

b) Somatório
Definição recursiva:
sum(n) = 1, se n = 1 (Critério de parada)
       = sum(n-1) + n, se n > 1 (Passo recursivo)


c) 1, 2, 4, 8, 16, 32, ...
Def. Rec:
seq(n) = 1, se n = 1 (Critério de parada)
       = seq(n-1) x 2, se n > 1. (Passo recursivo)

d) 3, -6, 12, -24, 48, ... 
Def. Rec.:
seq(n) = 3, se n = 1 (Critério de parada)
       = seq(n-1) x (-2), se n > 1. (Passo recursivo)
*/

#include <stdio.h>

//b)
int sum(int n) {
  // passo recursivo
  if(n > 1) return sum(n-1) + n;
  else return 1; // critério de parada
}

// c)
int seq_c(int n) {
  // passo recursivo
  if(n > 1) return seq_c(n-1)*2;
  else return 1;
}

// d)
int seq_d(int n) {
  // passo recursivo
  if(n > 1) return seq_d(n-1) * (-2);
  else return 3;
}

int main(void) {
  printf("sum(4): %d\n", sum(4));
  printf("seq_c(5): %d\n", seq_c(5));
  printf("seq_d(5): %d\n", seq_d(5));
  return 0;
}