#include<iostream>
#include<vector>
int main()
{
    std::vector<int>ve;
    ve.push_back(10);
    ve.emplace_back(20);
   // for(int i=0;i<ve.size();i++)
    //{
     //   std::cout<<ve[i]<<" ";
   // }
   for(auto it:ve)
   {
       std::cout<<it<<" ";
   }
   std::cout<<ve.begin()<<"begin";
   
   
    
}
