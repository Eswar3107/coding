#include<bits/stdc++.h>
using namespace std;
struct data
    {
        int rollno;
        string name;
        int age;
    };
int main(){
    struct data d[5];
    for(int i=1;i<3;i++){
        d[i].rollno=i;
        cout<<"enter name"<<"\n";
        cin>>d[i].name;
        cout<<"enter age"<<"\n";
        cin>>d[i].age;   
    }   
    for(int i=1;i<3;i++){
        if(i==2){
            cout<<d[i].rollno<<" ";
            cout<<d[i].name<<" ";
            cout<<d[i].age<<" ";
        }
    }
}