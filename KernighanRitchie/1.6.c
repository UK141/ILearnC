#include <stdio.h>
/*���������� 1.6. ��������� � ���, ��� ��������� getchar() != EOF �������� �������� 0 ��� 1 .*/
main ()
    {
    int c;
    c = getchar() != EOF;
    printf ("%ld\n", c);
    }
