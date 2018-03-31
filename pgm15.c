#include <stdio.h>

int prime(int k)

{

	int j,f;

	k=k+1;

	while(1>0)

	{

		int j=2,f=0;

		while(j<k)

		{

			if(k%j==0)

			{

				f=1;

				break;

			}

			else

			{

				j++;

			}

		}

		if(f==0)

		{

			return k;

		}

		else

		{

			k++;

		}
 
	}

}

int gcd(int a,int b)

{

    int p,n=2,y=1;

    if(a>b)

    {

        p=b;

    }

    else

    {

        p=a;

    }

    while(n<=p)

    {

        if(a%n==0&&b%n==0)

        {

            y*=n;

            a=a/n;

            b=b/n;

        }

        else

        {

            n=prime(n);

        }

    }

    if(y==1)

    {

        return 1;

    }

    else

    {

        return 0;

    }

}

int main()

{

    int n,i,a[10],j,x;

    printf("enter the limit of the array");

    scanf("%d",&n);

    printf("enter the elements");

    for(i=0;i<n;i++)

    {

        scanf("%d",&a[i]);

    }

    for(i=0;i<n;i++)

    {

        for(j=i+1;j<n;j++)

        {

            x=gcd(a[i],a[j]);

            if(x==1)

            {

                printf("%d\t%d\n",a[i],a[j]);

            }

        }

    }

    
return 0;

}