#include <iostream>
#include <string>

using namespace std;

int main()
{
	string one ("Wang WenHao");
	cout<<one<<endl;
	
	string two(20,'$');
	cout<<two<<endl;
	
	string three(one);
	cout<<three<<endl;
	
	one+="is Legendary";
	cout<<one<<endl;
	
	two="Sorry taht is";
	three[0]='P';
	string four;
	four=two+three;
	cout<<four<<endl;
	
	char alls[]="R.I.P.KOBE";
	string five(alls,7);
	cout<<five<<"5"<<endl;
	
	string six(alls+6,alls+10);
	cout<<six<<endl;
	
	string seven(&five[2],&five[5]);
	cout<<seven<<endl;
	
	string eight(four,7,16);
	cout<<eight<<endl;
	
	return 0;
 } 
