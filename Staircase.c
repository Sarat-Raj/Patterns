#include<stdio.h>
int main()
{   int n,m;
    for (n=0;n<10;n++)
    {
        for(m=10;m>=n;m--)
        {
            printf("  ");
        }
        printf("_|");
        printf("\n");
    }
}
