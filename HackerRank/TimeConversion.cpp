
#include <bits/stdc++.h>

using namespace std;


string timeConversion(string s) {
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
        return newtime;
        }
        else
        {
            newtime.append(s,0,8);
            return newtime;
        }
    }
    if(s.at(8)=='P')  //else can be used here
    {
        if(hh==12)
        {
            newtime.append(s,0,8);
            return newtime;
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
            return newtime;
        }
    }

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = timeConversion(s);

    fout << result << "\n";

    fout.close();

    return 0;
}

