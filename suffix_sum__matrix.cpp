#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<vector<int>>ve{{1,1,1},{1,1,1},{1,1,1}};
    int row=ve.size();
    int col=ve[0].size();
    for(int i=row-1;i>=0;i--){
        for(int j=col-2;j>=0;j--){
            ve[i][j]+=ve[i][j+1];
        }  
    }
    for(int j=col-1;j>=0;j--){
        for(int i=row-2;i>=0;i--){
            ve[i][j]+=ve[i+1][j];
        }
    }
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<ve[i][j]<<" ";
        }
        cout<<"\n";
    }

}
