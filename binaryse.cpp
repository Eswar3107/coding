#include<bits/stdc++.h>
using namespace std;
int main(){
    
    int start=0,end,len,num,mid;
    cin>>len;
    cin>>num;
    int arr[len];
    end=len-1;
    for(int i=0;i<len;i++){
        cin>>arr[i];
    }
    
    while(start<end){
        mid=(start+end)/2;
        }
        if(arr[mid]==num){
            cout<<mid;
            break;
        }
        else if(arr[mid]>num){
            end=mid-1;
        }
        else if(arr[mid]<num){
            start=mid+1;
        }
    }
}
