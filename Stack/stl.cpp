#include<iostream>
#include <stack>
using namespace std;\
int main(int argc, char const *argv[])
{
    //creation
    stack<int>st;

    //insertion
    st.push(10);
    st.push(9);
    st.push(23);
    st.push(56);

    //remove

    st.pop();

    //check element on top

    cout<< "Element on yop is: "<< st.top()<<endl;

    //size
    cout << "stack is size: " << st.size()  << endl;

    if(st.empty())
    cout << "stack is empty: " << endl;
    else
    cout << "stack is not empty " << endl;
    return 0;
    }

