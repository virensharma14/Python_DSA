#include <iostream>
#include <string>
#include <string.h>

using namespace std;
int main()
{
    // float double int long long 
    // string getline
    // float x=5.6;
    // double y=6.7;
    // cout <<y;

    // string s1;  
    // // cin>>s1;

    // getline(cin,s1);

    // char c;
    // c='a';

    // cout <<c <<endl;

    // cout<<s1;

    int day;

    cin>>day;

    switch(day)
    {
        case 1:
            cout<<"Mon" <<endl;
            break;
        case 2:
            cout <<"Tue"<<endl;
            break;
        case 3:
            cout<<"Wed" <<endl;
            break;
        case 4:
            cout <<"Thu"<<endl;
            break;

        case 5:
            cout<<"Fri" <<endl;
            break;
        case 6:
            cout <<"Sat"<<endl;
            break;
        case 7:
            cout<<"Sun" <<endl;
            break;
    }
    cout<<"End";


}