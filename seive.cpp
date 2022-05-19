#include<iostream>
using namespace std;
int n=1000001;
int primes[1000001];
void seive(){

    for(int i=2;i*i<n;i++){
        if (primes[i]==1){
            for(int j=i*i;j*j<n;j+=i){
                primes[j]=0;
            }
        }
    }
}
int main(){
    //int primes[1000001]=1;
    for(int i=0;i<n;i++){
    primes[i]=1;
    }
    primes[0]=primes[1]=0;
    seive();
    int q;
    cin>>q;
    int num;
    while(q--){
        cin>>num;
        if (primes[num]==1){
            cout<<"prime"<<"\n";
        }
        else{
            cout<<"nonprime"<<"\n";
        }
    }
    return 0;
}