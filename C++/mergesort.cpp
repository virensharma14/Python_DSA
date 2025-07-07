#include <iostream>
#include <string>
#include <string.h>
#include <set>
#include <map>
#include <vector>
using namespace std;


void merge(int *array,int low,int mid,int high)
{

    vector<int> temp;
    int left=low;
    int right=mid+1;

    while(left<=mid && right<=high)
    {
        if(array[left]<=array[right])
        {
            temp.push_back(array[left]);
            left++;
        }
        else
        {
            temp.push_back(array[right]);
            right++;
        }
            
    }

    while(left<=mid)
    {
        temp.push_back(array[left]);
        left++;

    }
    while(right<=high)
    {
        temp.push_back(array[right]);
        right++;
    }

    for(int i=low;i<=high;i++)
    {
        array[i]=temp[i-low];
    }



}

void mergesort(int *array,int low,int high)
{
    //divide
    if(low==high)
    {
        return;
    }
    int mid=(low+high)/2;

    mergesort(array,low,mid);
    mergesort(array,mid+1,high);

    //merging algorithm
    merge(array,low,mid,high);

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
    int low=0,high=n-1;

    mergesort(array,low,high);

     for(int i=0;i<n;i++)
    {
        cout<<array[i]<<endl;
    }

    
}