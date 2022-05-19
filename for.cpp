#include <iostream>
#include <cstdio>
#include <cmath>
#include<bits/stdc++.h>

using namespace std;
int main(){
    int a,b;
    cin>>a;
    cin>>b;
    string num[9] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

    for(int i=a;i<=b;i++){
        cout<<i;
        if(i<=9){
            cout<<num[i-1]<<"\n";
        }
        if(i>9){
            //cout<<i;
            if(i%2==0){
              //  cout<<i;
                cout<<"even"<<"\n";
            }
            else{
                cout<<"odd"<<"\n";
            
            }
        }
    }
    return 0;
}
