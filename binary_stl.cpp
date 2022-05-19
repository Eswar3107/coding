#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int arr[10]={5,6,1,8,5,5,3,2,9,10};
    int n=sizeof(arr)/sizeof(arr[0]);
    int key;
    cout<<"enter key";
    cin>>key;
    sort(arr,arr+n);
    for (auto it:arr){
        cout<<it<<" ";
    }
    cout<<"\n";
    bool present=binary_search(arr,arr+n,key);
    if(present){
        auto lb=lower_bound(arr,arr+n,key);
        //cout<<lb; this gives the address  
        cout<<"lb index is: "<<lb-arr;
        cout<<"\n";
        auto up=upper_bound(arr,arr+n,key);
        cout<<"up index is: "<<up-arr;
        cout<<"\n";
        cout<<"frequency of num is: "<<up-lb;
    }
    else{
        cout<<"no element";
    }
}

