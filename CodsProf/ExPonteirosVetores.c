#include <stdio.h>

int main(void) {

  char s[] = "OlaOleOli";
  char *ptr = s;

  int dif = (ptr - s);

  if(ptr > s)
    printf("ptr (%d) > s (%d)\n");
  else
    printf("ptr (%d) <= s (%d)\n");

  printf("ptr (%d) = s + dif (%d)\n", ptr, s + dif);

  return 0;
  
  printf("&s[0] = %d <=> &s = %d ? \n", &s[0], &s);

  printf("s = %d <=> &s[0] = %d\n", s, &s[0]);
  printf("ptr = %d <=> &ptr[0] = %d\n", s, &ptr[0]);
  return 0;

  int i = 0;
  // computando endereços
  while(s[i] != '\0') {
    printf("&s[%d] = %d <=> (s+%d) = %d\n", i, &s[i], i, (s+i));
    i++;
  }

  printf("s = %d\n", s);

  i = 0;
  printf("\n");
  // computando valores
  while(s[i] != '\0') {
    printf("s[%d] = %c <=> *(s+%d) = %c\n", i, s[i], i, *(s+i));
    i++;
  }


  // acessar o caractere 'a'
  // a partir de s
  printf("\ns[2] = %c <=> *(s+2) = %c\n\n", s[2], *(s+2));
  // a partir de ptr
  printf("ptr[2] = %c <=> *(ptr+2) = %c\n", ptr[2], *(ptr+2));

  return 0;
}