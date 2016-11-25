#include <stdio.h>
/*Упражнение 1.7. Напишите программу, печатающую значение EOF.*/
main ()
    {
    int c;
    c = getchar();
    if(c == EOF) printf ("%ld\n", c);
    }
