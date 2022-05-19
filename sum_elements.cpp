#include<bits/stdc++.h>
using namespace std;
int sum(int size,int arr[]){
    if(size<0) return 0;
    
    return sum(size-1,arr)+arr[size];
}
int main(){
    int size;
    cin>>size;
    int arr[size];
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    cout<<sum(size-1,arr);
}