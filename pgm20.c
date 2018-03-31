#include <stdio.h>

int main()
{
    int i,temp,a[10],n;
    printf("enter the limit of the array");
    scanf("%d",&n);
    printf("enter the array");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<(n/2);i++)
    {
        temp=a[i];
        a[i]=a[n-i-1];
        a[n-1-i]=temp;
    }
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
    return 0;
}
