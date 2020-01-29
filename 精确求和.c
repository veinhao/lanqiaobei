#include <stdio.h>
#include <string.h>
int main()
{
	int r,r1=0,i,alen,blen,clen;
	char a[101],b[101],c[102];
	scanf("%s%s",a,b);
	alen=strlen(a);
	blen=strlen(b);
	memset(c,0,sizeof(c));///将数组C清零 
	for(i=0;i<alen||i<blen;i++)
	{
	    if(i<alen) c[i]+=a[alen-i-1]-'0';
	    if(i<blen) c[i]+=b[blen-i-1]-'0';
	    if(c[i]>=10)
	    {
	    	c[i+1]=c[i]/10;
	    	c[i]%=10;
		}
	}
	clen=strlen(c);
	for(i=clen-1;i>=0;i--) printf("%d",c[i]);
	return 0;
}
