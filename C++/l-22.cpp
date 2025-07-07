#include <iostream>
#include <string>
#include <string.h>
#include <set>
#include <map>
#include <vector>
using namespace std;

void sort_0_1_2_dutch_flag_algo(int *array,int n)
{
    int low=0;
    int mid=0;
    int high=n-1;


    while(mid<=high)
    {
        if(array[mid]==0)
        {
           swap(array[mid],array[low]);

           low++;
           mid++;

        }
        else if(array[mid]==1)
        {
            mid++;


        }
        else
        {
            swap(array[high],array[mid]);
           
            high--;

        }

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

    sort_0_1_2_dutch_flag_algo(array,n);
    for(int i=0;i<n;i++)
    {
        cout<<array[i]<<endl;
    }

}