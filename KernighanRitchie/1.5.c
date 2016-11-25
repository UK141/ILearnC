#include <stdio.h>
#include <locale.h>
/* Упражнение 1.5. Измените программу преобразования температур так, чтобы она печатала таблицу в
обратном порядке, т. е. от 300 до 0.*/
main()
    {
    float fahr, celsius;
    int lower, upper, step;
    lower = 0;
    upper = 300;
    step = 20;
    celsius = upper;
    setlocale(LC_ALL, "Rus");
    printf("Таблица соответствия шкалы Фаренгейта к шкале Цельсия\n\n");
    while (celsius >= lower)
        {
        fahr = (celsius * 1.8) + 32.0;
        printf("%3.0f %6.0f\n", celsius, fahr);
        celsius = celsius - step;
        }
    }
