#include<bits/stdc++.h>
using namespace std;
struct Smartphone{
    string name;
    int storage;
    float price;
};
struct person {
    string name;
    int age;
    Smartphone phone;
};
void printsmartphoneinfo(Smartphone s){
    cout<<"name: "<<s.name<<"\n";
    cout<<"storage "<<s.storage<<"\n";
    cout<<"price "<<s.price;
}
void info(person p){
    cout<<"name "<<p.name<<"\n";
    cout<<"age"<<p.age<<"\n";
    printsmartphoneinfo(p.phone);
}
int main(){
    Smartphone smartphone;
    smartphone.name="motog40 fusion";
    smartphone.storage=64;
    smartphone.price=15000;
    Smartphone smartphone2;
    smartphone2.name="samusng m30s";
    smartphone2.storage=128;
    smartphone2.price=14000;
    //printsmartphoneinfo(smartphone);
    person p;
    p.name="eswar";
    p.age=20;
    p.phone=smartphone;
    info(p);
}