#include <iostream>
#include<stack>
using namespace std;


void insertatBottom(stack<int> &s, int target){
    if(s.empty()){
        s.push(target);
        return;
    }
    int topElement = s.top();
    s.pop();

    insertatBottom(s, target);

    s.push(topElement);

}

int main(int argc, char const *argv[])
{
    stack<int>s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    s.push(60);

    if(s.empty()){
        cout <<"Stack is empty, cannot insert at bottom" <<endl;
        return 0;
    }
    int target = s.top();
    s.pop();

    insertatBottom(s, target);
 ,m

    cout << "Printing: " << endl;
    while(!s.empty()){
        cout << s.top() << " ";
        s.pop();
    }
    cout << endl;
    return 0;
}

