#include<bits/stdc++.h>
using namespace std;
int sum(int num){
    if(num==0) return 0;
    return num%10+sum(num/10);
}
int main(){
    int num;
    cin>>num;
    cout<<sum(num);
}