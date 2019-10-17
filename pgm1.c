#include<stdio.h>
int main()
{
	int i,r,j;
	print("enter the number of rows");
	scan("%d",&r);
	for(i=0;i<r;i++)
	{
		for(j=0;j<i;j++)
		{
			print("\t");
		}
		for(;j<r;j++)
		{
			print("*");
			print("\t");
		}
		print("\n");
	}
	return 0;
}
