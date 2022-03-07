#include <stdio.h>

int main()
{
    //system("cls");
    FILE *fp = fopen("C:\\Users\\felip\\Desktop\\a.txt", "r");
    
    char ch;
    if(fp == NULL)
        printf("Impossivel ser o abres!");
    else
    {
        while((ch = fgetc(fp)) != EOF)
        {
            fprintf("%c", ch);
        }
        fclose(fp);
    }
    return 0;
}