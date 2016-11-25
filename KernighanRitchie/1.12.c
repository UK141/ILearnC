#include <stdio.h>
/*Упражнение 1.12. Напишите программу, которая печатает содержимое своего ввода, помещая по одному слову на каждой строке.*/
main()
    {
    char text;
    while ((text = getchar()) != EOF)
        {
        if (text == ' ' || text == '\n' || text == '\t')
            {
            printf("\n");
            continue;
            };
        printf ("%c", text);
        };
    printf('/n');
    };
