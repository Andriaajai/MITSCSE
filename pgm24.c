#include <stdio.h>

int main()
{
    int i,a[10],n;
    printf("enter the limit of the array");
    scanf("%d",&n);
    a[0]=0;
    a[1]=1;
    for(i=2;i<n;i++)
    {
        a[i]=a[i-1]+a[i-2];
    }
    printf("the fibonacci series is\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
    return 0;
}