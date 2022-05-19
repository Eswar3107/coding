#include<iostream>
#include<bits/stdc++.h>
using namespace std;
long long digits(long long n,int c){
    if (n==0){
        return c;
    }
    return digits(n/10,c+1);
}
int main(){
    long long n;
    cin>>n;
    cout<<digits(n,0);
};