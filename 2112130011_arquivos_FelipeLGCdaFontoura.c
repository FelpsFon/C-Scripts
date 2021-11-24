//Aluno: Felipe Louzada Guedes Carneiro da Fontoura - 2112130011

#include <stdio.h>
#include <stdlib.h>

typedef struct {
  int dia, mes, ano;
} t_data;

/*Considere o seguinte projeto do replit: https://replit.com/@DanielSouza7/BurlywoodCoralScientificcomputing#main.c

(1 ponto) a) Implemente a função calcular_media_notas() que realiza a média das notas,
linha por linha, e imprima na tela apenas se as notas forem maior ou igual a 7.*/

void calcular_media_notas(int n, int notas[n])
{
  int media;
  FILE *fp = fopen(".\\notas.txt", "r");

  if(fp == NULL)
		printf("Nao foi possivel abrir o arquivo\n");
	else
  {
    for(int i = 0; i <= n; i++)
    {
      for (int j = 0; fscanf(fp, "%d %d %d %d", &notas[0], &notas[1], &notas[2], &notas[3]) != '\n'; j++)
      {
        media = media + notas[j];
      }
      if((media / n) >= 7)
        printf("Notas maiores que 7:\n%d", (media / n));
    }
    fclose(fp);
  }
}

/*(1 ponto) b) Realize a leitura dos valores do vetor de datas e imprima cada linha no arquivo
"./datas.txt" os valores no seguinte formato: dd/mm/aaaa */

void ler_imprimir_datas(int n, t_data datas[n])
{
    FILE *fp = fopen(".\\datas.txt", "w");

  if(fp != NULL)
  {
    for(int i = 0; i < n; i++)
    {
      fprintf(fp, "%d\\%d\\%d\n", datas[i].dia, datas[i].mes, datas[i].ano);
    }
    fclose(fp);
  }
}

int main()
{
  t_data datas[4];
	int notas[4];
  
	calcular_media_notas(4, notas);
  ler_imprimir_datas(4, datas);
  return 0;
}

//Aluno: Felipe Louzada Guedes Carneiro da Fontoura - 2112130011