#include <stdio.h>
#include <locale.h>
/* Упражнение 1.4. Напишите программу, которая будет печатать таблицу соответствия температур по Цельсию
температурам по Фаренгейту.*/
main()
    {
    float fahr, celsius;
    int lower, upper, step;
    lower = 0;
    upper = 300;
    step = 20;
    celsius = lower;
    setlocale(LC_ALL, "Rus");
    printf("Таблица соответствия шкалы Фаренгейта к шкале Цельсия\n\n");
    while (celsius <= upper)
        {
        fahr = (celsius * 1.8) + 32.0;
        printf("%3.0f %6.0f\n", celsius, fahr);
        celsius = celsius + step;
        }
    }
