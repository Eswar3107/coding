#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<vector<int>>ve{{1,2,3},{4,5,6}};
    for(int i=0;i<ve.size();i++){
        for(auto it:ve[i]){
            cout<<it<<" ";
        }
        cout<<"\n";
    }
}