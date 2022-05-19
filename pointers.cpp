#include<iostream>
#include<string>
//using namespace std;
int main()
{
    int age;
    int *page=&age;
    std::string name;
    std::string *pname=&name;
    std::cout<<page;
    return 0;
}