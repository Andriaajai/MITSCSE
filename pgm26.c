#include <stdio.h>

int main()
{
    int i,j,a[10][10],m,n,k,temp;
    printf("enter the number of rows");
    scanf("%d",&m);
    printf("enter the number of columns");
    scanf("%d",&n);
    printf("enter the elements of matrix");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    printf("the sorted array is\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}
