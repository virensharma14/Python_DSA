#include <iostream>
#include <string>
#include <string.h>
#include <set>
using namespace std;


vector<int> intersection_optimal(int *array,int *array2,int n,int n2)
{
    int i=0,j=0;
    vector<int> answer;

    while(i<n && j<n2)
    {
        if(array[i]==array2[j])
        {
            answer.push_back(array[i]);
            j++;
            i++;

        }
        else if(array[i]<array2[j])
        {
            i++;
        }
        else if(array2[j]<array[i])
        {
            j++;
        }
       
    }
    return answer;

}

vector<int> intersection_brute(int *array,int *array2,int n,int n2)
{

    vector<int> visited(n2, 0);
    vector<int> answer;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n2;j++)
        {
            if(array[i]==array2[j] &&visited[j]==0)
            {

                answer.push_back(array[i]);
                visited[j]=1;
                break;
            }
            if(array2[j]>array[i])
            {
                break;
            }
        }
    }
    return answer;
}

vector<int> union_sorted_optimal(int *array,int *array2,int a,int b)
{

    int i=0,j=0;
    vector<int> unionarr;
    while(i<a && j<b)
    {
        if(array[i]<=array2[j])
        {
            if(unionarr.size()==0|| unionarr.back()!=array[i])
            {
                unionarr.push_back(array[i]);
            }
            i++;
            
        }
        else
        {
            if(unionarr.size()==0 || unionarr.back()!=array2[j])
            {
                unionarr.push_back(array2[j]);
            }
            j++;

        }
    
    }

    while(i<a)
    {
        if(unionarr.size()==0|| unionarr.back()!=array[i])
            {
                unionarr.push_back(array[i]);
            }
            i++;

    }

    while(j<b)
    {
        if(unionarr.size()==0 || unionarr.back()!=array2[j])
            {
                unionarr.push_back(array2[j]);
            }
            j++;
    }

    return unionarr;



}

void union_sorted(int *array,int *array2,int n,int n2,vector<int> &uni)
{
    set<int> st;
    for(int i=0;i<n;i++)
    {
        st.insert(array[i]);  //nlogn
    }
    
    for(int i=0;i<n2;i++)
    {
        st.insert(array2[i]);
    }

   

    for(auto it:st)
    {
        uni.push_back(it);
    }
}

void move_all_zeroes(int *array2,int n2)
{
    int j=-1;

    for(int i=0;i<n2;i++)
    { 
        if(array2[i]==0)
        {
            j=i;
            break;
        }
    }

    for(int i=j+1;i<n2;i++)
    {
        if(array2[i]!=0)
        {
            swap(array2[i],array2[j]);
            j++;
        }
    }



}

void reverseFunc(int arr[],int start,int end)
{
    while(start<=end)
    {
        int temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        start++;
        end--;

    }
}
void optimal_rotate_d_right(int *array,int n,int d)
{
    reverse(array,array+(n-d));
    reverse(array+(n-d),array+n);
    reverse(array,array+n);

}
void optimal_rotate_d_left(int *array,int n,int d)
{
    reverse(array,array+d);
    reverse(array+d,array+n);
    reverse(array,array+n);

}
void rotate_d_left(int *array,int n,int d)
{
    d=d%n;
    int temp[d];
    //storing in temp
    for(int i=0;i<d;i++)
    {
        temp[i]=array[i];
    }
    for(int i=d;i<n;i++)
    {
        array[i-d]=array[i];
    }
    for(int i=n-d;i<n;i++)
    {
        array[i]=temp[i-(n-d)];
    }


}

void rotate_1(int *array,int n)
{
    if (sizeof(array)==0) return;  
    else{
    int temp=array[0];
    for(int i=0;i<n;i++)
    {
        array[i-1]=array[i];
    }
    array[n-1]=temp; 
}
}

int main()
{
    vector<int>uni;
    int array[7]={1,2,3,4,5,6,7};
    int n=sizeof(array)/sizeof(array[0]);

    int array2[10]={1,0,2,3,2,0,0,4,5,1};
    int n2=sizeof(array2)/sizeof(array2[0]);
    int d=3;

    int sor_arr1[6]={1,1,2,3,4,5};
    int sor_arr2[6]={2,3,4,4,5,6};

    int a= sizeof(sor_arr1)/sizeof(sor_arr1[0]);
    int b=sizeof(sor_arr2)/sizeof(sor_arr2[0]);
    // rotate_1(array,n);
    // rotate_d_left(array,n,d);
    // optimal_rotate_d_left(array,n,d);
    // optimal_rotate_d_right(array,n,d);
    // move_all_zeroes(array2,n2);
    // union_sorted(array,array2,n,n2,uni);
    // vector<int> unionarr=union_sorted_optimal(sor_arr1,sor_arr2,a,b);
    // vector<int> intersection= intersection_brute(sor_arr1,sor_arr2,a,b);
    vector<int> intersection= intersection_optimal(sor_arr1,sor_arr2,a,b);

    // for(int i=0;i<uni.size();i++)
    // {
    //     // cout<<array[i]<<endl;
    //     // cout<<array2[i]<<endl;

    //     cout<<uni[i]<<endl;

    // }
    for(int i=0;i<intersection.size();i++)
    {
        // cout<<array[i]<<endl;
        // cout<<array2[i]<<endl;

        cout<<intersection[i]<<endl;

    }
    
}