#include <stdio.h>

/*Implemente a seguinte função: int Abs(int x). Devolve o valor absoluto de x.
Exemplo: Abs(-5) retorna 5; Abs( 5) retorna 5. (envie o link do replit)*/
int x;

int Abs(int x)
{
	if(x < 0) x = x * (-1);
	
	return x;
}

int main(void)
{
 	printf("Insira um número x: ");
	scanf("%d", &x);

	int Abs(int x);

    
 
  return 0;
}

/*Implemente a seguinte função: long int n_segundos(int n_horas). Devolve o número de segundos existentes em um conjunto de horas.
Exemplo: n_segundos(0) retorna 0; n_segundos(1) retorna 3600; n_segundos(2) retorna 7200. (envie o link do replit)*/

// int main(void)
// {
//  	printf("Insira um número x: ");
// 	scanf("%d", &x);

// 	long int n_segundos(int n_horas);
 
//   return 0;
// }

/*Implemente a seguinte função: ﬂoat max(ﬂoat x, ﬂoat y, ﬂoat w). Devolve o maior dos valores entre x, y e w.
Exemplo: max(3.5, 7.0, 2.) retorna 7.0. (envie o link do replit)*/

// int main(void)
// {
//  	printf("Insira um número x: ");
// 	scanf("%d", &x);

// 	ﬂoat max(ﬂoat x, ﬂoat y, ﬂoat w);
 
//   return 0;
// }

/*Implemente a seguinte função: void troca(int *x, int *y). Realiza a troca de valores entre as variáveis passadas como parâmetros na função troca.
Exemplo: a = 5 e b = 7. troca(&a, &b) realiza a = 7 e b = 5. Nota: utilize uma variável auxiliar.*/

// int main(void)
// {
//  	printf("Insira um número x: ");
// 	scanf("%d", &x);

// 	void troca(int *x, int *y);
 
//   return 0;
// }