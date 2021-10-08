#include <stdio.h>

int main()
{
/*Escreva um programa que, recorrendo a três funções distintas, escreva na tela a seguinte saída:
***
*****
*******
*****
***
*/
    // void imprimir(int n)
    // {
    //     for (int i = 0; i < n; i++) printf("*");
    //     printf("\n");
    // }

    // imprimir(3);
    // imprimir(5);
    // imprimir(7);
    // imprimir(5);
    // imprimir(3);

    //a) Verifica se ch é uma das vogais do alfabeto (maiúscula ou minúscula)
    // int IsVogal(char ch)
    // {
    //     if (ch == 65 || ch == 69 || ch == 73 || ch == 79 || ch == 85) printf("'%c' = Vogal Maiúscula\n", ch);
    //     else if (ch == 97 || ch == 101 || ch == 105 || ch == 111 || ch == 117) printf("'%c' = Vogal Minúsucula\n", ch);
    //     else printf("'%c' Não é vogal\n", ch);
    //     return (ch);
    // }

    // IsVogal('a');
    // IsVogal('z');
    // IsVogal('!');
    // IsVogal('i');
    // IsVogal('E');

    //b) Devolve um valor lógico que indica se x é ou não igual a y²
    // int is_square(int x, int y)
    // {
    //     int valogic;
    //     if (x == y*y) { valogic = 1; printf("%d\n", valogic); }
    //     else { valogic = 0; printf("%d\n", valogic); }

    //     return(valogic);
    // }

    // is_square(1,1);
    // is_square(4,2);
    // is_square(7,3);

    //c) Devolve o número de segundos existente em um conjunto de horas
    // long int n_segundos(int n_horas)
    // {
    //     long int seg_horas = n_horas * 3600;
    //     printf("%ld\n", seg_horas);

    //     return(seg_horas);
    // }

    // n_segundos(0);
    // n_segundos(1);
    // n_segundos(2);

    /*d) Semelhante à função anterior, só que recebe mais um parâmetro indicando aquilo que se quer saber:
    'h' - Horas, 'm' - Minutos e 's' - Segundos */

    // long int quant_tempo(int n_horas, char medTemp)
    // {
    //     if (medTemp == 'h') printf("%d horas\n", n_horas);
    //     else if (medTemp == 'm') printf("em %d hora(s), há %d minutos\n", n_horas, n_horas * 60);
    //     else if (medTemp == 's') printf("em %d hora(s), há %d segundos\n", n_horas, n_horas * 3600);
        
    //     return 0;
    // }

    // quant_tempo(1, 's');
    // quant_tempo(5, 'h');
    // quant_tempo(3, 'm');

    return 0;
}