#include <iostream>

using namespace std;

int main()
{
	int sum, n,chip[21][21]={-1};
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			cin>>chip[i][j];
		}
	}
	for(int j=0;j<=n;++j)
	{
		sum=0;
		for(int i=0;i<=n;++i)
		{
			if(chip[i][j]==1) sum++;
		}
		if(sum>n/2) cout<<j<<" ";
	}
	
	return 0;
 } 
