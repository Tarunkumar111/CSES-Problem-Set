

#include<bits/stdc++.h>
using namespace std;

#define l1 long long

l1 missingNumber(l1 n)
{
    l1 actSum=0;
    l1 expSum=n*(n+1)/2;
    l1 x;
    while(n>1)
    {
        cin>>x;
        actSum+=x;
        n--;
    }
    return expSum-actSum;
}

int main()
{
    l1 n;
    cin>>n;
    cout<<missingNumber(n);
}