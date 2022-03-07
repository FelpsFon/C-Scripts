#include <stdio.h>

/**
Escreva uma função que receba como parâmetro um caractere e retorne a quantidade de ocorrências encontradas ao longo de uma string.
  int count_ch(char s[], ch)
*/
int count_ch(char s[], char ch) {
  int count = 0;
  
  for(int i = 0; s[i] != '\0'; i++) {
    if(s[i] == ch) {
      count++;
    }
  }

  return count;
}

int main(void) {
  char s[] = "Abacate";
  char ch = 'o';
  printf("ocorrências de '%c' em '%s': %d\n", ch, s, count_ch(s, ch));
  return 0;
}