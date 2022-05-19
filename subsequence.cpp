#include <bits/stdc++.h>
using namespace std;
bool printSubsequences(int arr[], int index,vector<int> &subarr,int n,int sum,int s)
{
        if (index == n)
        {
            //cout<<index;
            if(s==sum){
                for (auto it:subarr){
                    cout << it << " ";
                    //return true;
                }
                 return true;
            }
            else{
                return false;	
            } 	
        }
	//pick the current index into the subsequence.
		subarr.push_back(arr[index]);
	    s+=arr[index];
		if(printSubsequences(arr, index + 1, subarr,n,sum,s)==true){
            return true;
        }
        s-=arr[index];
        subarr.pop_back();
	//not picking the element into the subsequence.
		if(printSubsequences(arr, index + 1, subarr,n,sum,s)==true){
            return true;
        }
        return 0;
    //return false;	
}
int main()
{
	int arr[]={1, 2, 1};
	int n=3;
	vector<int> vec;
	int sum=2,s=0;
	printSubsequences(arr, 0, vec,n,sum,s);
	return 0;
}

