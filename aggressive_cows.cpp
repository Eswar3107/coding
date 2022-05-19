#include<bits/stdc++.h>
using namespace std;
int n,cows;
bool canplacecows(int minDist,int a[]){
        int cntCows = 1; 
        int lastPlacedCow = a[0];
        for(int i = 1;i<n;i++){
            if(a[i] - lastPlacedCow >= minDist){
                cntCows++;
                lastPlacedCow = a[i]; 
            }
        }
        if(cntCows >= cows) return true;
        return false; 
}
int main(){
    int t;
    cin>>t;
    while (t--)
    {
        cin>>n>>cows;
        int positions[n];
        for(int i;i<n;i++){
            cin>>positions[i];
        }
        sort(positions,positions+n);
        int low=1,high=positions[n-1]-positions[0],mid;
        while(high-low>1){
            mid=(low+high)/2;
            if(canplacecows(mid,positions)){
                low=mid;
            }
            else{
                high=mid-1;
            }
        }
        if(canplacecows(high,positions)){
            cout<<high<<endl;
        }
        else{
            cout<<low<<endl;
        }
    }
}