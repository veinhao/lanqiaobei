#include <iostream>

using namespace std;

int main()
{
	int h,m,s,t;
	cin>>t;
	if(t/3600>=0) 
	{
		h=t/3600;
		t=t-3600*h;
		if(t/60>=0)
		{
			m=t/60;
			t=t-60*m;
			if(t>=0) s=t;
			
		}
	}
	cout<<h<<":"<<m<<":"<<s; 
}
