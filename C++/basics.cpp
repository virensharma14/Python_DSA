#include <iostream>
#include <string>
#include <string.h>
using namespace std;

// void printname(string n)
// {
//     cout<<"HI"<<n<<endl;
// }

int sumn(int n1,int n2)
{
    // cout<<n1+n2<<endl;

    return n1+n2;


}
int main()
{

    // int arr[5];

    // int array[3][5];

    // array[1][3]=5;

    // cout<<array[1][3]<<endl;

    // string s="striver";
    // cout<<s[2];

    // string name;
    // cin>>name;


    // int i=4;
    // while(i--)
    // {
    //     printname(name);
    // }

    int num1, num2;
    cin >> num1 >>num2;

    int res=sumn(num1,num2);

    cout<<res<<endl;

    // cin >>arr[0]>>arr[1]>>arr[2]>>arr[3]>>arr[4];

    // cout<<arr[1];

    return 0;

} 