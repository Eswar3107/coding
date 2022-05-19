#include<iostream>
#include<vector>
int main(){
    int a_sum=0;
    int b_sum=0;
    std::vector<int>a(1,2);
    std::vector<int>b(2,3);
    for(int i=0;i<a.size();i++){
         a_sum+=a[i];
         std::cout<<a[i];
    }
    for(int i=0;i<b.size();i++){
         b_sum+=b[i];
    }
   // std::cout<<a_sum<<b_sum;
    std::cout<<(a_sum)*(b_sum);
}