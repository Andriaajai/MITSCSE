#include <stdio.h>


int main()

{

    int n,i,a[10];

    printf("rnter the limit of the array");

    scanf("%d",&n);

    a[0]=0;

    a[1]=1;

    a[2]=1;

    for(i=3;i<n;i++)

    {

        a[i]=a[i-1]+a[i-2]+a[i-3];

    }

    printf("the required array is");

    for(i=0;i<n;i++)

    {

        printf("%d\t",a[i]);

    }


    return 0;

}
