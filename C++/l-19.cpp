#include <iostream>
#include <string>
#include <string.h>
#include <set>
using namespace std;

int number_once(int arr[],int n)
{
    int XOR=0;

    for(int i=0;i<n;i++)
    {
        XOR=XOR^arr[i];
    }
    return XOR;
}
int maximum_ones_consecutive(int arr[],int n)
{
    int cnt=0;
    int maxi=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==1)
        {
            cnt++;
            maxi=max(maxi,cnt);
        }
        else
        {
            cnt=0;
            
        }


    }

    return maxi;

}

int missingnumber(int arr[],int n)
{
    int xor1=0,xor2=0;

    for(int i=0;i<n-1;i++)
    {
        xor2=xor2^arr[i];
        xor1=xor1^(i+1);
    }
    xor1=xor1^n;

    return xor1^xor2;
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

    // int answer=missingnumber(array,n);
    // int answer=maximum_ones_consecutive(array,n);
    int answer=number_once(array,n);

    cout<<answer<<endl;
    
    
    
    
}