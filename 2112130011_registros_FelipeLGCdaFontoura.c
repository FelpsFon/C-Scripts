//Aluno: Felipe Louzada Guedes Carneiro da Fontoura - 2112130011

#include <stdio.h>
#include <stdlib.h>

/*(1 ponto) a) Defina em C um novo uma nova estrutura denominada t_pet que contenha os seguintes atributos:
- nome: string (tamanho 100)
- raça: string (tamanho 50)
- sexo: caractere (F - para fêmea; e M - para macho)
- dono: estrutura t_pessoa

t_pessoa contém os seguintes atributos:
- nome: string (tamanho 100)
- idade: inteiro*/

typedef struct
{
  char nome[100];
  int idade;
} t_pessoa;

typedef struct
{
  char nome[100], raca[50], sexo; //(F - para fêmea; e M - para macho)
  t_pessoa dono;
} t_pet;

/*(1 ponto) b) Implemente a função "t_pet *alocar_pets(int n);" que aloca dinamicamente n animais e retorna a posição de memória alocada à um ponteiro.*/

t_pet *alocar_pets(int n)
{
  int *pet = (malloc(n * sizeof(t_pet)));
}

/*(1 ponto) c) Implemente a função "void ler_pet(t_pet *pet);" que seja capaz de ler do terminal as informações de um pet e modificar com auxílio do ponteiro a variável que foi passada como parâmetro.*/

void ler_pet(t_pet *pet)
{
  printf("Insira o nome do pet: ");
  fgets(pet->nome, 100, stdin);

  printf("Agora a sua raça: ");
  fgets(pet->raca, 50, stdin);

  printf("Seu sexo (F ou M): ");
  scanf("%c%*c", &pet->sexo);

  printf("Qual o nome do seu(sua) dono(a)? ");
  fgets(pet->dono.nome, 100, stdin);

  printf("Qual a idade de seu(sua) dono(a)? ");
  scanf("%d", &pet->dono.idade);
}

/*(1 ponto) d) Escreva a função "void imprimir_pets(int n, t_pet pets[n]);" que realiza a impressão na tela de todos os campos de cada um dos n pets do sexo feminino.*/

void imprimir_pets_f(int n, t_pet pets[n])
{
  if(pets->sexo == 'F' || pets->sexo == 'f')
  {
  printf("\nNome do pet: %sRaça: %sNome do(a) dono(a): %sIdade do(a) dono(a): %d\nSexo: ",
            pets->nome,    pets->raca, pets->dono.nome,      pets->dono.idade);

  if (pets->sexo == 'M' || pets->sexo == 'm')
    printf("Masculino\n");
  else
    printf("Feminino\n");
  }
  else
    printf("Apenas imprimo pets femininos");
}

int main()
{
  int n = 3;
  printf("Posicao de memoria da alocacao de pets: %0p\n", *alocar_pets(n));

  t_pet pets[n];

  ler_pet(&pets[0]);
  imprimir_pets_f(0, pets);
  return 0;
}

//Aluno: Felipe Louzada Guedes Carneiro da Fontoura - 2112130011