#include <stdio.h>
int main()
{
    int i,j,n;
    printf("enter the side of the square");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(i==n||i==1)
        {
            for(j=1;j<=n;j++)
            {
                printf("*\t");
            }
            printf("\n\n");
        }
        else
        {
            for(j=1;j<=n;j++)
            {
                if(j==1||j==n)
                {
                    printf("*\t");
                }
                else
                {
                    printf("\t");
                }
            }
            printf("\n\n");
        }
    }

    return 0;
}
