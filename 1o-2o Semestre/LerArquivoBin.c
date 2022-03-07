#include <stdio.h>

void leitura_arquivo()
{
  FILE *fp; // file pointer.
  fp = fopen("C:\\Program Files (x86)\\Steam\\steamapps\\common\\Rain World\\exceptionLog.txt", "r");

  char ch;
  if(fp == NULL)
    printf("Impossível abrir o arquivo!\n");
  else
  { // operações de leitura
    while((ch = fgetc(fp)) != EOF)
      printf("%c", ch);
    fclose(fp);
  }
}

int main()
{
  leitura_arquivo();
  getchar();

  return 0;
}