#include <iostream>
#include <string>
#include <string.h>
#include <list>
using namespace std;

void explainQueue()
{
    queue<int> q;
    q.push(1);
    q.push(2);
    
    q.emplace(6);

    q.back();
    cout<<q.back()<<endl;

    cout<<q.front()<<endl;

    q.pop();

    cout<<q.front()<<endl;
    
}

void explainStack()
{
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    st.emplace(6);

    cout<<st.top()<<endl;
    st.pop();

    cout<<st.top()<<endl;

    cout<<st.size()<<endl;
    cout<<st.empty()<<endl;

    stack<int> s2;
    s2.swap(st);

    cout<<s2.top()<<endl;
    
}
void explailist()
{
    list<int> ls;
    ls.push_back(2);
    ls.emplace_back(4);

    ls.push_front(5);

    
}
void explainvector()
{
    vector <int> v;
    v.push_back(1);

    v.emplace_back(2);
    v.emplace_back(6);
    v.emplace_back(7);

    vector<pair<int,int>> pairv;
    //same things below just difference in sytax of push_back and emplace_back (it takes the pair automatically with ())
    pairv.push_back({1,2});
    pairv.emplace_back(1,2);

    // vector <int> v(5,100);

    // vector <int> v(5);

    vector <int> v1(5,20);
    vector <int> v2(v1);

    vector <int> :: iterator it=v.begin();
    it=it+2;

    cout<<*(it)<<endl;

    for(vector<int> ::iterator it=v1.begin();it!=v1.end();it++)
    {
        cout<<*(it)<<endl;
    }
    for(auto it=v2.begin();it!=v2.end();it++)
    {
        cout<<*(it)<<endl;
    }

    for(auto it:v2)
    {
        cout<<it<<endl;
    }
//deletion in vector 
    v.erase(v.begin()+1);

    vector<int>a(2,100);  //{100,100}

    a.insert(a.begin(),300);// {300,100,100}
    a.insert(a.begin()+1,500); //{300,500,100,100}

    a.insert(a.begin()+1,2,10); //{300,10,10,500,100,100}

    vector <int> copy(2,50);

    v.insert(v.begin(),copy.begin(),copy.end());

    cout<<a.size();

    a.pop_back(); // last element popped out 

    v.swap(a); //vector elements interchanged

    v.clear(); //erases vector 



}
void explainpair()
{
    pair<int,int> p={1,3};

    cout<<p.first<<" "<<p.second<<endl;
    pair<int,pair<int,int>> q={1,{3,4}};
    cout<<q.first<<" "<<q.second.first<<" "<<q.second.second<<endl;

    pair<int,int> array[]={{1,3},{2,6},{4,5}};
    cout<<array[1].second;
}


int main()
{
    // explainpair();
    explainQueue();
    return 0;
}