#include <stdio.h>
/* ���������� 1.10. �������� ���������, ���������� �������� ������� � �������� ����� � ������� ������� ��������� �� \t, ������� ����� �� \b � ������ �������� ��������� ����� �� \\. ��� ������� �������� ��� ������� ��������� � �����.*/
main()
    {
    char text;
    while ((text = getchar()) != EOF)
        {
        if(text == '\t' )
            {
            printf("\\t");
            continue;
            };
        if(text == '\b' )/* � �� ���� ��� �������� ������ ����� � ������� � windows*/
            {
            printf("\\b");
            continue;
            };
        if(text == '\\' )
            {
            printf("\\");
            continue;
            };
        printf ("%c", text);
        };
    printf('/n');
    };
