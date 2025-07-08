#include <iostream>
#include <string>
#include <string.h>
#include <set>
#include <map>
#include <vector>
using namespace std;


int dp_on_stocks(int *arr,int n)
{
    int mini=arr[0],profit=0;

    for(int i=1;i<n;i++)
    {
        int cost=arr[i]-mini;
        profit=max(cost,profit);

        mini=min(arr[i],mini);

    }
    return profit;
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

    int answer=dp_on_stocks(array,n);
    cout<<answer<<endl;
}