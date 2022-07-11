

#include<bits/stdc++.h>
using namespace std;


int maxLenString(string s1)
{
    int ans=1, c=0;
    char firstRepChar = 'A';
    for(char d: s1)
    {
        if(d==firstRepChar)
        {
            ++c;
            ans=max(c, ans);
        }
        else
        {
            firstRepChar=d;
            c=1;
        }
    }
    return ans;
}

int main()
{
    string st;
    cin>>st;
    cout<<maxLenString(st);
}












