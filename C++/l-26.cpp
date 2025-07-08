#include <iostream>
#include <string>
#include <string.h>
#include <set>
#include <map>
#include <vector>
using namespace std;

//positive and negative numbers are not equal
void rearrange_by_sign_unequal_P_N(vector<int> &arr,int n)
{  
   vector<int> pos,neg;
   
   for(int i=0;i<n;i++)
   {
    if(arr[i]>0)
    {
        pos.push_back(arr[i]);

    }
    else
    {
        neg.push_back(arr[i]);
    }

   }
   if(pos.size()>neg.size())
   {
    for(int i=0;i<neg.size();i++)
    {
        arr[2*i]=pos[i];
        arr[2*i+1]=neg[i]; 
    }

    int index=neg.size()*2;

    for(int i=neg.size();i<pos.size();i++)
    {
        arr[index]=pos[i];
        index++;
    }

   }
   else
   {
    for(int i=0;i<pos.size();i++)
    {
        arr[2*i]=pos[i];
        arr[2*i+1]=neg[i]; 
    }

    int index=pos.size()*2;

    for(int i=pos.size();i<neg.size();i++)
    {
        arr[index]=neg[i];
        index++;
    }

   }
}

void rearrange_by_sign(vector<int> &arr,int n)
{  
   vector<int> ans(n,0);
   int posIndex=0,negIndex=1;
   for(int i=0;i<n;i++)
   {
    if(arr[i]>0)
    {
        ans[posIndex]=arr[i];
        posIndex+=2;

    }
    else
    {
        ans[negIndex]=arr[i];
        negIndex+=2;
    }

   }

   for(int i=0;i<n;i++)
   {
    arr[i]=ans[i];
   }
}


int main()
{
    int n;
    cin>>n;
    vector<int> array(n);


    for(int i=0;i<n;i++)
    {
        cin>>array[i];

    }

    rearrange_by_sign(array,n);
    for(int i=0;i<n;i++)
    {
        cout<<array[i]<<endl;

    }
}