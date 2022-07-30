#include<stdio.h>
int main()
{
    int i,j;
    char k;
    for(i=1;i<=4;i++)
    {
        k='A';
        for(j=1;j<=4;j++)
        {
            if(j>=i&&j<=4)
            {
                printf("%c",k);
                k++;
            }
            else
                printf(" ");
        }
        k=k-2;
        for(j=5;j<=7;j++)
            {
                if(j>=5&&j<=8-i)
                {
                    printf("%c",k);
                    k--;
                }
                else
                    printf(" ");
            }
        printf("\n");
    }
    return 0;
}
