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
  FILE *fp = fopen("C:\\Programação\\C\\C Scripts\\notas.txt", "r");

  if(fp != NULL)
  {
    for(int i = 0; i < n; i++)
    {
      for (int j = 0; scanf("%d %d %d %d", notas[j]) != '\n'; j++;)
      {
        media + notas[j];
      }
      if((media / n)) >= 7)
        printf("Notas maiores que 7:\n%d", media / n);
    }
    fclose(fp);
  }
}

/*(1 ponto) b) Realize a leitura dos valores do vetor de datas e imprima cada linha no arquivo
"./datas.txt" os valores no seguinte formato: dd/mm/aaaa */

// ler_imprimir_datas()
// {
//     FILE *fp = fopen("./datas.txt", "w");

//   if(fp != NULL) {
//     // operações de leitura e escrita
//     for(int i = 0; i < n; i++) {
//       fprintf(fp, "%d\\%d\\%d\n",
//           datas[i]->t_data.dia,datas[i]->t_data.mes,datas[i]->t_data.ano);
//     }
//     fclose(fp);
//   }
// }

int main()
{
  t_data datas[4];

	int notas[4];
  
	calcular_media_notas(4, notas);
  return 0;
}

//Aluno: Felipe Louzada Guedes Carneiro da Fontoura - 2112130011