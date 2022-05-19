#include <bits/stdc++.h> 
using namespace std; 
long long d=0,f=0; 
int main() 
{ 
    long long m,b; 
    cin>>m>>b;  
    vector<string>st(m); 
    vector<vector<long long> >st1(m,vector<long long>(b,0)); 
    for(int i=0;i<m;i++){ 
        cin>>st[i]; 
    } 
    for(int i=0;i<m;i++){ 
        for(int j=0;j<b;j++){ 
            if(i==0){ 
                if(st[i][j]=='C'){ 
                    d++; 
                    st1[i][j]=m-i-1; 
                } 
            } 
            else{ 
                if(st[i][j]=='C'){ 
                    d++; 
                    long long m=m-i-1; 
                    st1[i][j]=min(st1[i-1][j],-m); 
                } 
                else if(st[i][j]=='H'){ 
                    if(st[i-1][j]=='H'){ 
                       st1[i][j]=st1[i-1][j]; 
                    } 
                    else{ 
                       st1[i][j]=m-i;  
                    } 
                } 
                else if(st1[i-1][j]<0){ 
                    st1[i][j]=st1[i-1][j]; 
                } 
            } 
        } 
         
    } 
    for(int i=0;i<b;i++){ 
        if(st1[m-1][i]<0){ 
            long long r=st1[m-1][i]; 
            f+=-r; 
        } 
        else{ 
            f+=st1[m-1][i]; 
        } 
         
    }
    f=2*f; 
    cout<<d<<" "<<f; 
     
    return 0; 
}