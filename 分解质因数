#include <iostream>

using namespace std;

bool zhishu(int n)
{
	if(n==2) return true;
	for(int i=2;i<n;i++)
	{
		if(n%i==0) return false;
	}
	return true;
}
int main()
{
	int a,k=0,b,c[100];
	cin>>a>>b;
	for(int i=a;i<=b;i++)
	{
		cout<<i<<"=";
		if(zhishu(i)) cout<<i;
		else
		{
			for(int j=2;j<i;j++)
			{
				int p=i;
				if(p%j==0&&zhishu(j))
				{
					p=p/j;
					while(p%j==0)
					{
						c[k++]=j;
						p=p/j;
					} 
					c[k++]=j;
				}
			}
			for(int j=0;j<k;j++)
			{
				cout<<c[j];
				if(j!=k-1) cout<<"*";
			}
			k=0;
		}
		cout<<endl;
	}
	return 0;
}
