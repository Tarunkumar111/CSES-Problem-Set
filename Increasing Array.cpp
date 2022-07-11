#include<bits/stdc++.h>
using namespace std;
#define l1 long long


int main()
{
    l1 n;
    cin>>n;
    l1 Arr[n];
    for(l1 i=0;i<n;i++)
        cin>>Arr[i];
    l1 ans=0;
    for (l1 i = 1; i < n; i++) {
        if (Arr[i] < Arr[i - 1]) {
            ans += (Arr[i - 1] - Arr[i]);
            Arr[i] = Arr[i - 1];
        }
    }
    cout<<ans;
}












