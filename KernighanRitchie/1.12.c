#include <stdio.h>
/*���������� 1.12. �������� ���������, ������� �������� ���������� ������ �����, ������� �� ������ ����� �� ������ ������.*/
main()
    {
    char text;
    while ((text = getchar()) != EOF)
        {
        if (text == ' ' || text == '\n' || text == '\t')
            {
            printf("\n");
            continue;
            };
        printf ("%c", text);
        };
    printf('/n');
    };
