#include <stdio.h>
#include <locale.h>
/*���������� 1.3. ���������������� ��������� �������������� ���������� ����� �������, ����� ��� �������� ��� �������� ���������. */
main()
    {
    float fahr, celsius;
    int lower, upper, step;
    lower = 0;
    upper = 300;
    step = 20;
    fahr = lower;
    setlocale(LC_ALL, "Rus");
    printf("������� ������������ ����� ���������� � ����� �������\n");
    while (fahr <= upper)
        {
        celsius = (5.0/9.0) * (fahr-32.0);
        printf ("%3.0f %6.1f\n", fahr, celsius);
        fahr = fahr + step;
        }
    }
