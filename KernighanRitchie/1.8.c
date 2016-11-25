#include <stdio.h>
/* Упражнение 1.8. Напишите программу для подсчета пробелов, табуляций и новых строк.*/
main()
    {
    char text;
    int counter;
    counter = 0;
    while ((text = getchar()) != EOF)
        {
        switch (text)
            {
            case '\n':
            case ' ':
            case '\t':
                counter++;
                break;
            default:
            break;
            }
        }
    printf ("%d\n", counter);
    }
