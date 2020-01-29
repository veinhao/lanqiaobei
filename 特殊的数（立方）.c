#include<stdio.h>

int main()
{
	int n,i,g[3];
	for(i=100;i<999;i++)
	{
		g[0]=i%10;
		g[1]=(i%100)/10;
		g[2]=i/100;
		if(i==g[0]*g[0]*g[0]+g[1]*g[1]*g[1]+g[2]*g[2]*g[2])
		{
			printf("%d\n",i);
		}
	}
	return 0;
}
