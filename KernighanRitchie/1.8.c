#include <stdio.h>
/* ���������� 1.8. �������� ��������� ��� �������� ��������, ��������� � ����� �����.*/
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
