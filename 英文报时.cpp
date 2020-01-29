#include <iostream>
#include <string>
using namespace std;

int main()
{
	int h,m;
	string t[24]= {"zero", "one", "two", "three", "four", "five", "six", "seven","eight", "nine", "ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen",
		"sixteen", "seventeen","eighteen","nineteen" , "twenty", "thirty", "forty", "fifty"};
	cin>>h>>m;
	if(h<21) cout<<t[h]<<" ";
	else cout<<t[20]<<" "<<t[h%10]<<" "; 
	if(m==0) cout<<"o'clock";
	else
	{
		if(m<=20) cout<<t[m];
		else if(m==30)
		{
			cout<<t[21];
		}
		else if(m==40)
		{
			cout<<t[22];
		}
		else if(m==50)
		{
			cout<<t[23]; 
		}
		else
		{
			if(m>20&&m<30) cout<<t[20]<<" "<<t[m%10];
			else if(m>30&&m<40) cout<<t[21]<<" "<<t[m%10];
			else if(m>40&&m<50) cout<<t[22]<<" "<<t[m%10];
			else if(m>50) cout<<t[23]<<" "<<t[m%10];
		}
	}
		
	return 0;	
}
