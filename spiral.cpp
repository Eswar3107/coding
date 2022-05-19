#include<iostream>
#include<vector>
using namespace std;
int main(){
    int m,n;
    cin>>m>>n;
    vector<vector<int>>matrix;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            int ele;
            cin>>ele;
            matrix[i].push_back(ele);
        }
    }
    for(int i=0;i<matrix.size();i++){
        for(auto it:matrix[i]){
            cout<<it<<" ";
        }
        cout<<"\n";
    }
}
