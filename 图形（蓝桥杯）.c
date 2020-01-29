#include<stdio.h>

int main()
{
	int i,j,n,m;
	char a[26][26];
	char b[26]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
	scanf("%d %d",&n,&m);
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			
			if(i==0)
			{
				a[i][j]=b[j];
				printf("%c",a[i][j]);
			}
			else 
			{
				if(j-i<0)
				{
					a[i][j]=b[i-j];
					printf("%c",a[i][j]);
				}
				else
				{
					a[i][j]=b[j-i];
					printf("%c",a[i][j]);
				}				
			}
		}
		printf("\n\n");
	}
	return 0;
 } 
