#include <stdio.h>
/*���������� 1.13. �������� ���������, ���������� ����������� ���� �������� ����. ����������� �����
�������� ��������������� ��������.
������ ������ �� 10*/
main()
    {
    char text;
    int dlinna[10],counter=0,i,m;
    for(i=0;i<10;i++)dlinna[i]=0;
    while ((text = getchar()) != EOF)
        {
        if (text == ' ' || text == '\n' || text == '\t' || text == '.') /*���� ����� �����������*/
            {
            if(counter>10)
                {
                counter = 0;
                continue; /*������ �� 10 ��������*/
                };
            dlinna[counter]++;
            counter = 0;
            continue;
            };
        counter++;
        };
    for(i=0;i<10;i++)
        {
        printf("%d - %d", i, dlinna[i]);
        if(dlinna[i]>0)
            {
            for(m=0;m<dlinna[i];m++)
                {
                printf("=");
                };
            };
        printf("\n");
        };
    };
