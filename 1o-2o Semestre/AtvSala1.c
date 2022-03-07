#include <stdio.h>

/*Implemente a seguinte função: int Abs(int x). Devolve o valor absoluto de x.
Exemplo: Abs(-5) retorna 5; Abs( 5) retorna 5. (envie o link do replit)*/
// int Abs(int x);

// int main(void)
// {
// 	printf("o valor absoluto de -7 é %d\n", Abs(-7));
//   return 0;
// }

// int Abs(int x)
// {
// 	if(x < 0) x = x * (-1);
// 	return x;
// }

/*Implemente a seguinte função: long int n_segundos(int n_horas). Devolve o número de segundos existentes em um conjunto de horas.
Exemplo: n_segundos(0) retorna 0; n_segundos(1) retorna 3600; n_segundos(2) retorna 7200. (envie o link do replit)*/

// long int n_segundos(int n_horas);
// int segs;

// int main(void)
// {
// 	printf("em 2 horas, há %ld segundos\n", n_segundos(2));

//   return 0;
// }

// long int n_segundos(int n_horas)
// {
// 	segs = n_horas * 3600;
// 	return segs;
// }

/*Implemente a seguinte função: ﬂoat max(ﬂoat x, ﬂoat y, ﬂoat w). Devolve o maior dos valores entre x, y e w.
Exemplo: max(3.5, 7.0, 2.) retorna 7.0. (envie o link do replit)*/

// float max(float x, float y, float w);
// float maior;

// int main(void)
// {
// 	printf("dentre os três, %.2f é o maior deles.\n", max(2.5, 9.4, 15.2));
//   return 0;
// }

// float max(float x, float y, float w)
// {
// 	if(x > y || x > w) maior = x;
// 	if(y > x || y > w) maior = y;
// 	if(w > x || w > y) maior = w;
// 	return maior;
// }

/*Implemente a seguinte função: void troca(int *x, int *y). Realiza a troca de valores entre as variáveis passadas como parâmetros na função troca.
Exemplo: a = 5 e b = 7. troca(&a, &b) realiza a = 7 e b = 5. Nota: utilize uma variável auxiliar.*/

// void troca(int *x, int *y);
// int a, b, p;

// int main(void)
// {
//   printf("insira o valor de a e b:\n");
//   scanf("%d %d", &a, &b);

// 	troca(&a, &b);
//   printf("trocando de lugar, a = %d e b = %d\n", a, b);

//   return 0;
// }

// void troca(int *x, int *y)
// {
// 	p = *x;
// 	*x = *y;
// 	*y = p;
// }