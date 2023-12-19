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

    while(!st.empty()){
        cout<< st.top()<<" ";
        st.pop();
    }
    cout << endl;
    return 0;
}
