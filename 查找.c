#include<stdio.h>

int main()
{
	int v ,a[1001] ,n,i;
	scanf("%d",&n);
	for(;i<n;i++)
	{
		scanf("%d",a+i);
	}
	scanf("%d",&v);
	i=0;
	while(a[i]!=v)
	{
		i++;
	}
	if(i<n) 
	{
		printf("%d",i+1);
	}
	else
	{
		i=-1;
		printf("%d",i);
	}
	return 0;
	
}
