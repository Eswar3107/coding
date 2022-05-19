#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n=13;
    int ans=0;
    int p=1;
    while (n>0)
    {
        /* code */
        int last=(n&1);
        ans+=p*last;
        p=p*10;
        n=n>>1;
    }
    cout<<ans;
    
}
