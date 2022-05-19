#include<bits/stdc++.h>
using namespace std;
bool cmp(pair<int,int> a,pair<int,int>b){
    return a.second>b.second;        //we can sort the second element in pair by using a.second>b.second
}
int main(){
    vector<pair<int,int>>a;
    for(int i=0;i<5;i++){
        int first,second;
        cin>>first>>second;
        a.push_back(make_pair(first,second));
    }
    sort(a.begin(),a.end(),cmp);
    for(int i=0;i<5;i++){
        cout<<a[i].first<<" "<<a[i].second<<"\n";
    }
}