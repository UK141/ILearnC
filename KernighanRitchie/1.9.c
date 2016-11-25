#include <stdio.h>
/* Упражнение 1.9. Напишите программу, копирующую символы ввода в выходной поток и заменяющую стоящие подряд пробелы на один пробел.*/
main()
    {
    char text, lastsymbol;
    while ((text = getchar()) != EOF)
        {
        if(text == ' ' & lastsymbol == ' ')
            {
            continue;
            };
        lastsymbol = text;
        printf ("%c", text);
        };
    printf("/n");
    };
