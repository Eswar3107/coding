#include<bits/stdc++.h>
using namespace std;
int powers(int p,int num,int res){
    if(p==0){
        return res;
    }
    else{
       if(p%2==0){
          return powers(p/2,num*num,res);
       }
       else{
          return powers(p-1,num,res*num);
       }
    }

}
int main(){
    int p,num;
    cin>>num>>p;
    cout<<powers(p,num,1);
    return 0;
};