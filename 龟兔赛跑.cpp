#include <iostream>

using namespace std;

int main()
{
	int map[201][201]={0};
	int m,n,i,j,k;
	cin>>m>>n;
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			cin>>map[i][j];
		}
	}
    i=-1,j=0;
    k=0;
	while( k<m*n)
	{
		while(i+1<m&&map[i+1][j]!=-1)
		{
			cout<<map[++i][j]<<" ";
			map[i][j]=-1;
			++k;
		}
		while(j+1<n&&map[i][j+1]!=-1)
		{
			cout<<map[i][++j]<<" ";
			map[i][j]=-1;
			++k;
		}
		while(i-1>=0&&map[i-1][j]!=-1)
		{
			cout<<map[--i][j]<<" ";
			map[i][j]=-1;
			++k;
		}
		while(j-1>=0&&map[i][j-1]!=-1)
		{
			cout<<map[i][--j]<<" ";
			map[i][j]=-1;
			++k;
		}
	}
	return 0;
 } 
