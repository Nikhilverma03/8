#include<stdio.h>
int main()
{
    int i,j;
    for(i=1;i<=4;i++)
    {
        for(j=1;j<=5;j++)
        {
            if(j==1||j==i)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    for(i=1;i<=1;i++)
    {
        for(j=1;j<=5;j++)
        {
            if(j>=i&&j<=6-i)
                printf("*");
        }
    }
    return 0;
}

