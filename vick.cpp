#include<bits/stdc++.h>
using namespace std;
int main(){
     int t;
    cin>>t;
    while(t--){
     int n;
     cin>>n;
     vector<int>arr;
     for(int i=0;i<n;i++){
         int ele;
         cin>>ele;
         arr.push_back(ele);
     }
     map<int,int>dic;
     for(auto it:arr){
         dic[it]+=1;
     }
     int ans=0;
     for(auto it:dic){
             ans+=((it.second-1)*it.second);
         
     }
     cout<<ans<<"\n";
     }
     
}