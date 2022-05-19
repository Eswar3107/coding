#include<iostream>
#include<cmath>
int main(){
    int n;
    int c=0;
    std::cout<<"enter number:";
    std::cin>>n;
    while(n!=0){
        if(n&1==1){
            c+=1;
        }
        n=floor(n/2);
    }
    std::cout<<c;
}
    