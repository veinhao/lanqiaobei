#include<stdio.h>

int main()
{
	int i,j,n,a[100][100];
	scanf("%d",&n);
	for(;i<n;i++)
	{
		for(j=0;j<=i;j++)
		{
			if(j==0||j==i)
			{
				a[i][j]=1;
				printf("%d ",a[i][j]); 
			}
			else
			{
				a[i][j]=a[i-1][j]+a[i-1][j-1];
				printf("%d ",a[i][j]); 
			}
		}
		printf("\n");
	}
	return 0;
}
