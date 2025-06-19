#include <iostream>
#include <string>
#include <string.h>
using namespace std;

//pass by value (copy )

void dosomething(int num)
{
    cout<<num<<endl;
    num +=5;
    cout<<num<<endl;
    num +=5;
    cout<<num<<endl;

}

void dosomething2(int &num)
{
    cout<<num<<endl;
    num +=5;
    cout<<num<<endl;
    num +=5;
    cout<<num<<endl;

}
//pass. by reference
void dostring(string &s)
{
    s[0]='t';
    cout<<s<<endl;


}
int main()
{

    int n=10,m=10;
    dosomething(n);
    cout<<n<<endl;
    // dosomething2(m);
    // cout<<m<<endl;


    string s="Viren";
    dostring(s);
    
    cout<<s<<endl;
    

  

    return 0;

}
