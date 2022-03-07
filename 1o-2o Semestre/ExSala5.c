#include <stdio.h>

int main()
{
    // Q2

    int a = 5, b = 3;
    int *p1, *p2, *p3;

    p1 = NULL;
    p2 = &a;
    p3 = &b;

    printf("valores de: p1 %d; p2 %0p; p3 %0p; Endereços de p1 %0p; p2 %0p; p3 %0p;", p1, p2, p3, &p1, &p2, &p3);

    //Q3

    //D: Utilizando a notação de ponteiros apenas, escreva a faixa de código que percorra cada uma das notas do vetor

    /*E: Utilizando a notação de ponteiros apenas, escreva a faixa de código que calcule a média das notas e a sua menção final (MF)
    de acordo com as seguintes regras:
    SR se MF < 3;
    MI se 3 <= MF < 5;
    MM se 5 <= MF < 7;
    MS se 7 <= MF < 9;
    SS se 9 <= MF <= 10.
    */

    // int notas[5] = {8, 7, 2, 9, 6};
    // int *ptr = notas;
    // int i, media = 0;

    // while (i < 5)
    //  {
    //     printf("notas[%d]: (endereço: %0p, valor: %d)\n", i+1, (ptr + i), *(ptr + i));
    //     media = media + (*(ptr+i));
    //     i++;
    //  }
    //  media = media / i;
    //  printf("MEDIA = %d\n", media);

    // if (media >= 3 && media < 5) printf("MI");
    // else if (media >= 5 && media < 7) printf("MM");
    // else if (media >= 7 && media < 9) printf("MS");
    // else if (media >= 9 && media <= 10) printf("SS");


    // printf("notas[%d]: (endereço: %p, valor: %d)\n", &notas[3], (ptr + 3));

    // int a = 4, *c = &a;
    // *c = *c + a;

    // printf("a: %d", a);
    return 0;
}