#include <iostream>
#include <string>
#include <string.h>
#include <set>
#include <map>
#include <vector>
using namespace std;

string optimal_2sum(vector<int> array,int target)

{
    int left=0;
    int right=array.size()-1;

    sort(array.begin(),array.end());

    while(left <=right)
    {
        int sum=array[left]+array[right];

        if(sum==target)
        {
            return "YeS";
        }
        else if(sum>target)
        {
            right--;
        }
        else if(sum<target)
        {
            left++;
        }


    }
    return "NO";
    

  
}




string better_2sum(vector<int> array,int target)

{
    map<int,int>mpp;

    for(int i=0;i<array.size();i++)
    {
        int a=array[i];
        int rem=target-a;

        if(mpp.find(rem)!=mpp.end())
        {
            return "YES"; //return {mpp[rem],i}

        }
        mpp[a]=i;
    }

    return "NO";

  
}




int main()
{
    // int n;
    // cin>>n;
    // int array[n];


   vector<int> array2={4,1,2,3,1};
   vector<int> array3={1 ,2 ,3 ,1, 1, 1, 1, 3, 3};
    

    
    string answer3=optimal_2sum(array2,5);

    cout<<answer3<<endl;
    
    
    
    
}