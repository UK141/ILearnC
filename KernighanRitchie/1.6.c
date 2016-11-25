#include <stdio.h>
/*”пражнение 1.6. ”бедитесь в том, что выражение getchar() != EOF получает значение 0 или 1 .*/
main ()
    {
    int c;
    c = getchar() != EOF;
    printf ("%ld\n", c);
    }
