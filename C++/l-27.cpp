#include <iostream>
#include <string>
#include <string.h>
#include <set>
#include <map>
#include <vector>
using namespace std;

void nextpermutation(int *array,int n)
{
    int index=-1;
    
    for(int i=n-2;i>=0;i--)
    {
        if(array[i]<array[i+1])
        {
            // swap(array[i],array[i+1]);
            index=i;
            break;
        }
    }

    if(index==-1)
    {
        reverse(array,array+n);
    }

    for(int i=n-1;i>=index;i--)
    {
        if(array[i]>array[index])
        {
            swap(array[i],array[index]);
            break;
        }
    }
    sort(array+index+1,array+n);


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


    nextpermutation(array,n);
    for(int i=0;i<n;i++)
    {
        cout<<array[i]<<endl;
    }
}
