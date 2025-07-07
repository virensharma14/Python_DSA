#include <iostream>
#include <string>
#include <string.h>
#include <set>
#include <map>
#include <vector>
using namespace std;

int majority_optimal(int *array,int n)
{
    int cnt=0,el=0;

    for(int i=0;i<n;i++)
    {
        if(cnt==0)
        {
            cnt=1;
            el=array[i];
        }
        else if(array[i]==el)
        {
            cnt++;
        }
        else
        {
            cnt--;
        }

    }
    int cnt1=0;


    for(int i=0;i<n;i++)
    {
        if(array[i]==el)
        {
            cnt1++;
        }
    

    }

    if(cnt1>n/2)
    {
        return el;
    }

    return -1;
    



}
int majority_better(int *array,int n)
{
    int it=0;
    map<int,int> mpp;
    for(int i=0;i<n;i++)
    {
        mpp[array[i]]++;

    }
    for(auto it:mpp)
    {
        if(it.second>n/2)
        {
            return it.first;
        }
    }
    return -1;
}

int main()
{
    int n;

    cin>>n;
    int array[n];
    for(int i=0;i<n;i++)
    {
        cin>>array[i];
    } 

    int answer=majority_optimal(array,n);
    // for(int i=0;i<n;i++)
    // {
    //     cout<<array[i]<<endl;
    // }
    cout<<answer<<endl;

}