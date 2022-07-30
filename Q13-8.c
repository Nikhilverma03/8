#include<stdio.h>
int main()
{
    int i,j;
    char k;
    for(i=1;i<=1;i++)
    {
        k='A';
        for(j=1;j<=13;j++)
        {
            if(j>=1&&j<7)
            {
                printf("%c",k);
                k++;
            }
            if(j>=7&&j<=13)
             {
                printf("%c",k);
                k--;
             }
        }
        printf("\n");
    }
    for(i=1;i<=6;i++)
    {
        k='A';
        for(j=1;j<=7;j++)
        {
            if(j>=1&&j<=7-i)
        {
            printf("%c",k);
            k++;
        }
            else
            printf(" ");
        }
        for(j=8;j<=13;j++)
        {
            if(j>=7+i&&j<=13)
        {
            printf("%c",k-1);
            k--;
        }
            else
            printf(" ");
        }
        printf("\n");
    }
    return 0;
}
