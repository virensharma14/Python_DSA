#include <iostream>
#include <string>
#include <string.h>
#include <set>
#include <map>
#include <vector>
#include <climits>
using namespace std;



long long max_sum_kadane(int *array,int n)
{
    long long sum=0,maxi=LONG_MIN;
    for(int i=0;i<n;i++)
    {
        
        sum+=array[i];

        if(sum<0)
        {
            sum=0;
        }

        if(sum>maxi)
        {
            maxi=sum;
        }

    }

    return maxi;

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

    long long answer=max_sum_kadane(array,n);
    cout<<answer<<endl;
}