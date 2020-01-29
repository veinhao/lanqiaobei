#include<stdio.h>

int main()
{
	int i,l,x[4],y[4];
	for(i=1000;i<9999;i++)
	{
		y[0]=i%10;
		y[1]=(i%100)/10;
		y[2]=(i%1000)/100;
		y[3]=i/1000;
		x[3]=y[0];
		x[2]=y[1];
		x[1]=y[2];
		x[0]=y[3];
		l=x[1]*10+x[2]*100+x[3]*1000+x[0];
		if(l==i)
		printf("%d\n",i);
	}
	return 0;
}
