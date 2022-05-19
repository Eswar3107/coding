#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
int n,q;
while (t--)
{
   cin>>n>>q;
    int arr[n+1];
    for(int i=1;i<=n;i++){
        cin>>arr[i];
    }
    int front[n+1];
    int back[n+1];
    front[0]=back[n+1]=0; 
    for(int i=1;i<=n;i++){
        front[i]=__gcd(front[i-1],arr[i]);
    }
     for(int i=n;i>=1;i--){
        back[i]=__gcd(back[i+1],arr[i]);
    }
    while (q--)
    {
        /* code */
        int l,r;
        cin>>l>>r;
        cout<<__gcd(front[l-1],back[r+1]);
    }
    
}
}


