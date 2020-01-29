#include<iostream>
using namespace std;


int main()
{
	int a[10000];
	int p=1,i=0,n,j,k=0;
	a[0]=1;
	cin>>n;
	if(n==1) a[0]=1;
	for(i=2;i<=n;i++){
		for(j=0;j<=k;j++){
		p=a[j]*i+p;
		a[j]=p%10;
		p=p/10;
		}
		if(p!=0){
			k++;
			a[k]=p%10;
			p=p/10;
		}
	
	}
	for(int v=k;v>=0;v--) cout<<a[v];	
	return 0;
 }

