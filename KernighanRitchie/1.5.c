#include <stdio.h>
#include <locale.h>
/* ���������� 1.5. �������� ��������� �������������� ���������� ���, ����� ��� �������� ������� �
�������� �������, �. �. �� 300 �� 0.*/
main()
    {
    float fahr, celsius;
    int lower, upper, step;
    lower = 0;
    upper = 300;
    step = 20;
    celsius = upper;
    setlocale(LC_ALL, "Rus");
    printf("������� ������������ ����� ���������� � ����� �������\n\n");
    while (celsius >= lower)
        {
        fahr = (celsius * 1.8) + 32.0;
        printf("%3.0f %6.0f\n", celsius, fahr);
        celsius = celsius - step;
        }
    }
