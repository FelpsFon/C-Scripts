//EX 1//

// #include <stdio.h>

// // Definição de estrutura.
// struct Data {
//   int dia, ano;
//   char mes[12];
// };

// // declaração de variáveis do tipo estrutura
// struct Data d, datas[100], *ptr_data;

// int main(void) {
//   printf("Hello World\n");
//   return 0;
// }

//EX 2//

// #include <stdio.h>
// #include <string.h>

// // Definição de estrutura.
// typedef struct Data {
//   int dia, ano;
//   char mes[12];
// } t_data;

// typedef struct Pessoa {
//   char nome[100];
//   int idade;
//   float salario;
//   t_data data_nasc;
// } t_pessoa;

// // declaração de variáveis do tipo estrutura
// t_data d, datas[100], *ptr_data;

// t_pessoa daniel;



// int main() {
//   daniel.salario = 600;
//   daniel.data_nasc.dia = 30;

//   t_data dt_nasc;

//   dt_nasc.dia = 23;
//   strcpy(dt_nasc.mes, "Janeiro");
//   dt_nasc.ano = 1996;

//   printf("dia: %d\nmês: %s\nano: %d\n",
//     dt_nasc.dia, dt_nasc.mes, dt_nasc.ano);

//   return 0;
// }


//EX 3//


#include <stdio.h>
#include <string.h>

// Definição de estrutura.
typedef struct {
  int dia, mes, ano;
} t_data;

void incrementaMes(t_data *data) {
  //(*data).mes++;
  data->mes++;
  if(data->mes == 13) {
    data->mes = 1;
    data->ano++;
  }
}

int main() {
  t_data data;
  data.dia = 31;
  data.mes = 12;
  data.ano = 2015;

  incrementaMes(&data);

  printf("Nova data: %d/%d/%d\n", data.dia, data.mes, data.ano);

  return 0;
}