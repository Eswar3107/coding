#include<bits/stdc++.h>
using namespace std;
int fib(int n)
{
    if (n<1)
        return 0;
    else if (n==1)
        return 1;
    return fib(n-1) + fib(n-2);
}
int main ()
{
    int n=9;
    for(int i=0;i<n;i++){
        cout<<fib(i)<<" ";
    }
    return 0;
}