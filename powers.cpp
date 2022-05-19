#include<bits/stdc++.h>
using namespace std;
int main(){
   int p,n;
   cin>>n>>p;
   int res=1;
   while(p){
      if(p%2==0){
          p=p/2;
          n=n*n;
      }
      else{
         res*=n;
         p--;
      }
    }
cout<<res;
}