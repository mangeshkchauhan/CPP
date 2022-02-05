#include<bits/stdc++.h>
using namespace std;

int main(){
	string s;
	cout<<"Enter time int the 12 hr format as hh:mm:ssAM / hh:mm:ssPM only"<<endl;
	cin>>s;
	string newtime,hr1,hr2,hr,newhr;
	char c,d;
	int a = (int)s.at(0)-'0';
    int b = (int)s.at(1)-'0';
    int hh=a*10+b%10;
    if(s.at(8)=='A')
	{
		if(hh==12)
		{
			s.at(0)='0';
			s.at(1)='0';
		newtime.append(s, 0, 8); 
		}
		else
		{
			newtime.append(s,0,8);
		}
	}
	if(s.at(8)=='P') //else statement can be used
	{
		if(hh==12)
		{
			newtime.append(s,0,8);
		}
		else
		{
			hh+=12;
			a=hh/10;
			b=hh%10;
			c=(char)a+'0';
			d=(char)b+'0';
			string hr1(1,c);
			string hr2(1,d);
			hr=hr1+hr2;
			newhr.append(s,2,6);
			newtime=hr+newhr;
		}
	}cout<<"24 hr format: ";
	cout<<newtime<<endl;
	return 0;
}

