#include <stdio.h>

int main()
{
    int i,j,a[10][10],b[10][10],c[10][10],m,n;
    printf("enter the number of rows");
    scanf("%d",&m);
    printf("enter the number of columns");
    scanf("%d",&n);
    printf("enter the elements of first matrix");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("enter the elements of second matrix");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            c[i][j]=a[i][j]+b[i][j];
        }
    }
    printf("the sum is\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d\t",c[i][j]);
        }
        printf("\n");
    }
    return 0;
}
