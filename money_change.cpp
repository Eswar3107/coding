#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
bool compare(int a,int b){
    return a<=b;
}
int main(){
    vector<int>coins={186,419,83,408};
    int amount=6249;
    while(amount!=0){
        int lb=lower_bound(coins.begin(),coins.end(),amount,compare)-coins.begin()-1;
        //cout<<lb;
        int m=coins[lb];
        cout<<m<<" ";
        amount=amount-m;
    }
   

}