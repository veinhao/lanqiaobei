#include <stdio.h>
#include <algorithm> 
using namespace std;

int main()
{
	int i, px[101],s=0,q;
	scanf("%d",&q);
	for(i=0;i<q;i++) scanf("%d",px+i);
	sort(px,px+q);
	while(q>1)
	{
		i=0;
		px[i]=px[i]+px[i+1];
		s+=px[i];
		px[i+1]=-1;
		sort(px,px+q);
		for(i=0;i<q-1;i++)
		{
			px[i]=px[i+1];
		}
		q--;
	}
	printf("%d",s);
	
	return 0;
 } 
