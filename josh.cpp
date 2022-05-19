#include<bits/stdc++.h>
using namespace std;
int main(){
    int n=1e5;
    int p=0,q=0;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int m;
    for(int i=1;i<n;i++){
        if (arr[i]>0) continue;
        m=i-1;
        while(m>=0 and arr[m]>0){
            arr[m+1]=arr[m];
            m=m-1;
        }


    }
     for(auto it:arr){
         cout<<it<<" ";
    }
}