#include <stdio.h>
int main()
{
    int n,x,sum=0;
    printf("enter the number");
    scanf("%d",&n);
    while(n/10>0)
    {
        sum=0;
        while(n>0)
        {
            x=n%10;
            sum+=x;
            n=n/10;
        }
        n=sum;
    }
    printf("%d",n);
    return 0;
}
