#include <stdio.h>
/*���������� 1.7. �������� ���������, ���������� �������� EOF.*/
main ()
    {
    int c;
    c = getchar();
    if(c == EOF) printf ("%ld\n", c);
    }
