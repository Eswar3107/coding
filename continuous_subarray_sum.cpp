#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin>>n;
    int nums[n];
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    cin>>k;
    int pre=0;
    bool flag=true;
    map<int,int>dic;
    for(int i=0;i<n;i++){
            pre+=nums[i];
            pre=pre%k;
            if (pre==0 and i){
                cout<<true;
                flag=false;
                break;
            }
            if(dic.find(pre)!=dic.end()){
                if(i-dic[pre]>1){
                    cout<<true;
                    flag=false;
                    break;
                }
            }
            else dic[pre]=i;
        }
   
    if(flag==true){
       cout<<false;
    }
    
}