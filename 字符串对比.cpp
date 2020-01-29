#include <iostream>
#include <string.h>

using namespace std;

int main()
{
	char a[100],b[100];
	int al,bl;
	cin>>a;
	cin>>b;
	al=strlen(a);
	bl=strlen(b);
	if(strcmp(a,b)==0) cout<<"2";
	else if(al==bl&&a!=b)
	{
		strcpy(a,strlwr(a));
		strcpy(b,strlwr(b));
		if(strcmp(a,b)==0) cout<<"3";
		else cout<<"4";
	}
	else if(al!=bl) cout<<"1";
	return 0;
} 
