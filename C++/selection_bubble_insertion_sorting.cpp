#include <iostream>
#include <string>
#include <string.h>
#include <set>
using namespace std;


void insertionsort(int *arr,int n)
{
    for(int i=0;i<n;i++)
    {
        int j=i;
        while(j>0 && arr[j-1]>arr[j])
        {
            //swap until j>0 
            int temp=arr[j];
            arr[j]=arr[j-1];
            arr[j-1]=temp;
            j--; 

        }
    }
}


void bubblesort(int *arr,int n)
{
    for(int i=n-1;i>=0;i--)
    {
        int didswap=0;
        for(int j=0;j<=i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                //swap both
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                didswap=1;
            }
        }
        if(didswap==0) //if sorted array only once O(N) TC best case
        {
            break;
        }
    }
}
void selectionsort(int *arr,int n)
{
    for(int i=0;i<=n-2;i++)
    {
        int min=i;
        for(int j=i;j<n;j++)
        {
            if(arr[j]<arr[min])
            {
                min=j;

            }
        }
        //swap (arr[min],arr[i])
        int temp=arr[min];
        arr[min]=arr[i];
        arr[i]=temp;
        
    }
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

    selectionsort(array,n);
    // bubblesort(array,n);
    // insertionsort(array,n);
    for(int i=0;i<n;i++)
    {
        cout<<array[i]<<endl;

    }
}