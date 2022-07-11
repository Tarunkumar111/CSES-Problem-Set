

#include<bits/stdc++.h>
using namespace std;

void weirdAlgo(long long n)
{
    while(n>=1)
    {
        cout<<n<<" ";
        if (n==1)
            return;
        else
        {
            if(n%2==0)
                n=n/2;
            else
                n=3*n+1;
        }
    }
}

int main()
{
    long long  n;
    cin>>n;
    weirdAlgo(n);
}
