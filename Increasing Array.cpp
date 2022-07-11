#include<bits/stdc++.h>
using namespace std;
#define l1 long long

int main()
{
    l1 n;
    cin>>n;
    l1 ans=0, max_el=INT_MIN;
    for(l1 i=0;i<n;i++)
    {
        l1 x;
        cin>>x;
        max_el=max(max_el, x);
        ans+=(max_el-x);
    }
    cout<<ans;
}












