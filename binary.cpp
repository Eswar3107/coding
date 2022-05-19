#include<bits/stdc++.h>
using namespace std;
int recur(int num,int arr[],int start,int end,int mid){
    if(start>end) return -1;
    if(arr[mid]==num) return mid;
    else if(arr[mid]>num){
        end=mid-1;
    }
    else if(arr[mid]<num){
        start=mid+1;
    }

   return recur(num,arr,start,end,(start+end)/2);

}
int main(){
    //int arr[];
    int s,num,start,end,mid;
    cin>>s;
    cin>>num;
    int arr[s];
    start=0;
    end=s-1;
    mid=(start+end)/2;
    for(int i=0;i<s;i++){
        cin>>arr[i];
    }
    cout<<recur(num,arr,0,s-1,mid);

}