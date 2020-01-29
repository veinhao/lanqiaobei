#include<stdio.h>

int main()
{
	int max, min,sum,i,n,a[10002];
	scanf("%d",&n);
	for(;i<n;i++)
	{
		scanf("%d",a+i);
	}
	max=min=sum=a[0];
	for(i=1;i<n;i++)
	{
		if(a[i]>max) max=a[i];
		if(a[i]<min) min=a[i];
		sum+=a[i];
	}
	printf("%d\n",max);
	printf("%d\n",min);
	printf("%d\n",sum);
	return 0;
}
