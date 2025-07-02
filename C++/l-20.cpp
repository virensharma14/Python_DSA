#include <iostream>
#include <string>
#include <string.h>
#include <set>
#include <map>
#include <vector>
using namespace std;


int subarray_brute_hashing(vector<int> a,long long k)
{
    map<long long,int> presumMap;
    long long sum=0;
    int maxlen=0;

    for(int i=0;a.size();i++)
    {
        sum+=a[i];
        if(sum==k)
        {
            maxlen=max(maxlen,i+1);
        }

        long long rem=sum-k;
        if(presumMap.find(rem)!=presumMap.end())
        {
            int len=i-presumMap[rem];
            maxlen=max(maxlen,len);

        }

        presumMap[rem]=i;


    }
    return maxlen;
     
}

int subarray_brute_better(int arr[],int n,int k2)
{
    
    int len=0;
    for(int i=0;i<n;i++)
    {
        int sum=0;
        for(int j=i;j<n;j++)
        {
            
            sum+=arr[j];
            
            if(sum==k2)
            {
                len=max(len,j-i+1);
 
            }


        }
            
    }
    return len;
}


int subarray_brute(int arr[],int n,int k2)
{
    
    int len=0;
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
            int sum=0;
            for(int k=i;k<=j;k++)
            {
                sum+=arr[k];
            }

            if(sum==k2)
            {
                len=max(len,j-i+1);

            }


        }
            
    }
    return len;
}

int main()
{
    // int n;
    // cin>>n;
    // int array[n];


   vector<int> array2={1 ,2 ,3 ,1, 1, 1, 1, 4, 2, 3};
    

    // for(int i=0;i<n;i++)
    // {
    //     cin>>array[i];

    // }

    // int answer=missingnumber(array,n);
    // int answer=maximum_ones_consecutive(array,n);
    // int answer=subarray_brute(array2,10,3);
    // int answer=subarray_brute_better(array2,10,3);
    int answer2=subarray_brute_hashing(array2,3);

    // cout<<answer<<endl;
    
    
    
    
}