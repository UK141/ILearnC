#include <stdio.h>
#include <locale.h>
/*���������� 1.15. ���������� ��������� �������������� ����������, ������� ���� �������������� � ��������� �������.*/
float convertFahr2Cels(float fahr);

main()
    {
    float fahr;
    int lower, upper, step;
    lower = 0;
    upper = 300;
    step = 20;
    fahr = lower;
    setlocale(LC_ALL, "Rus");
    printf("������� ������������ ����� ���������� � ����� �������\n");
    while (fahr <= upper)
        {
        printf ("%3.0f %6.1f\n", fahr, convertFahr2Cels(fahr));
        fahr = fahr + step;
        }
    return 0;
    }

float convertFahr2Cels (float fahr)
    {
    float cels;
    cels = (5.0/9.0) * (fahr-32.0);
    return cels;
    }
