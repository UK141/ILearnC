#include <stdio.h>
/* ���������� 1.9. �������� ���������, ���������� ������� ����� � �������� ����� � ���������� ������� ������ ������� �� ���� ������.*/
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
