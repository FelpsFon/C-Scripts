//Aluno: Felipe Louzada Guedes Carneiro da Fontoura - 2112130011

#include <stdio.h>

/*(2 pontos) 1. Considere um vetor de n inteiros na main. Escreva um procedimento que seja capaz de percorrer esse vetor de inteiros e computar a média dos valores. O procedimento não deve retornar valor. O valor da média deve ser recuperado na main utilizando passagem de parâmetros por "referência".*/

void media_vetor(int n, int vetor[n], int *p)  //Escreva um procedimento para percorrer esses inteiros e computar a média dos valores.
{
  int aux;

  for(int i = 0; i < n; i++)
  {
    aux = aux + vetor[i];
  }

  *p = aux / n; //cálculo da média
}

/*(2 pontos) 2. Com base na sequência apresentada a seguir

3, 7, 11, 15, 19, ...
 
  (1 ponto) a) Escreva a definição recursiva; e 
  f(n) = <critério de parada> se <condição>
  f(n) = <passo recursivo> se <condição>*/

  /*
  RESPOSTA a)
    f(n) = 3            se n <= 3; - Critério de Parada
    f(n) = f(n-1) + 4   se n > 3; - Passo Recursivo
  */

//(1 ponto) b) Implemente o algoritmo recursivo.
int soma4_recursivo(int n)
{
  if (n > 3) return soma4_recursivo(n-1) + 4; //PR
  else return 3; //CP
}


int main()
{
  int media = 0, vetor[] = { 20, 40, 60 };
  media_vetor(3, vetor, &media);
  printf("a media de seu vetor e: %d\n", media);

  printf("o valor da sequencia e: %d\n", soma4_recursivo(5));
  return 0;
}

//Aluno: Felipe Louzada Guedes Carneiro da Fontoura - 2112130011